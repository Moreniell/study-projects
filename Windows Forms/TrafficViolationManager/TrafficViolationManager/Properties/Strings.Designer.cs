﻿//------------------------------------------------------------------------------
// <auto-generated>
//     Этот код создан программой.
//     Исполняемая версия:4.0.30319.42000
//
//     Изменения в этом файле могут привести к неправильной работе и будут потеряны в случае
//     повторной генерации кода.
// </auto-generated>
//------------------------------------------------------------------------------

namespace Moreniell.TrafficViolationManager.Properties {
    using System;
    
    
    /// <summary>
    ///   Класс ресурса со строгой типизацией для поиска локализованных строк и т.д.
    /// </summary>
    // Этот класс создан автоматически классом StronglyTypedResourceBuilder
    // с помощью такого средства, как ResGen или Visual Studio.
    // Чтобы добавить или удалить член, измените файл .ResX и снова запустите ResGen
    // с параметром /str или перестройте свой проект VS.
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("System.Resources.Tools.StronglyTypedResourceBuilder", "4.0.0.0")]
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
    [global::System.Runtime.CompilerServices.CompilerGeneratedAttribute()]
    internal class Strings {
        
        private static global::System.Resources.ResourceManager resourceMan;
        
        private static global::System.Globalization.CultureInfo resourceCulture;
        
        [global::System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode")]
        internal Strings() {
        }
        
        /// <summary>
        ///   Возвращает кэшированный экземпляр ResourceManager, использованный этим классом.
        /// </summary>
        [global::System.ComponentModel.EditorBrowsableAttribute(global::System.ComponentModel.EditorBrowsableState.Advanced)]
        internal static global::System.Resources.ResourceManager ResourceManager {
            get {
                if (object.ReferenceEquals(resourceMan, null)) {
                    global::System.Resources.ResourceManager temp = new global::System.Resources.ResourceManager("Moreniell.TrafficViolationManager.Properties.Strings", typeof(Strings).Assembly);
                    resourceMan = temp;
                }
                return resourceMan;
            }
        }
        
        /// <summary>
        ///   Перезаписывает свойство CurrentUICulture текущего потока для всех
        ///   обращений к ресурсу с помощью этого класса ресурса со строгой типизацией.
        /// </summary>
        [global::System.ComponentModel.EditorBrowsableAttribute(global::System.ComponentModel.EditorBrowsableState.Advanced)]
        internal static global::System.Globalization.CultureInfo Culture {
            get {
                return resourceCulture;
            }
            set {
                resourceCulture = value;
            }
        }
        
        /// <summary>
        ///   Ищет локализованную строку, похожую на Сохранить изменения перед закрытием?.
        /// </summary>
        internal static string CloseFileMsg {
            get {
                return ResourceManager.GetString("CloseFileMsg", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Ищет локализованную строку, похожую на Данные были изменены.
        /// </summary>
        internal static string CloseFileTitle {
            get {
                return ResourceManager.GetString("CloseFileTitle", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Ищет локализованную строку, похожую на Указанный файл не существует!.
        /// </summary>
        internal static string FileNotExist {
            get {
                return ResourceManager.GetString("FileNotExist", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Ищет локализованную строку, похожую на {0} → История штрафов.
        /// </summary>
        internal static string HistorySubjTooltip {
            get {
                return ResourceManager.GetString("HistorySubjTooltip", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Ищет локализованную строку, похожую на Нарушитель не выбран..
        /// </summary>
        internal static string HistoryTooltipDefault {
            get {
                return ResourceManager.GetString("HistoryTooltipDefault", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Ищет локализованную строку, похожую на Готово.
        /// </summary>
        internal static string StatusReady {
            get {
                return ResourceManager.GetString("StatusReady", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Ищет локализованную строку, похожую на Ячейка столбца &quot;{0}&quot; должна быть заполнена.
        /// </summary>
        internal static string ValueRequriedError {
            get {
                return ResourceManager.GetString("ValueRequriedError", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Ищет локализованную строку, похожую на Ожидается ввод даты в формате дд.мм.гггг.
        /// </summary>
        internal static string WrongDateFormat {
            get {
                return ResourceManager.GetString("WrongDateFormat", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Ищет локализованную строку, похожую на Нарушение не может иметь дату из будующего.
        /// </summary>
        internal static string WrongViolationDate {
            get {
                return ResourceManager.GetString("WrongViolationDate", resourceCulture);
            }
        }
    }
}
