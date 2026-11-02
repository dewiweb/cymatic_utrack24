// rea decompile_all
// name: common_vsscanf<char>
// address: 0x4d1824
// body: available
// range: 0x4d1824-0x4d18e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_vsscanf<char>(unsigned __int64,char const * const,unsigned int,char const *
   const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_vsscanf<char>
          (__uint64 param_1,char *param_2,uint param_3,char *param_4,__crt_locale_pointers *param_5,
          char *param_6)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *unaff_ESI;
  char *pcVar4;
  int local_9c;
  char local_98 [8];
  char local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> local_80 [120];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((param_2 == (char *)0x0) || (param_4 == (char *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_004d0d1c();
  }
  else {
    if (param_3 == 0xffffffff) {
      pcVar4 = param_2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      param_3 = (int)pcVar4 - (int)(param_2 + 1);
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_9c,param_5);
    local_88 = param_2 + param_3;
    local_8c = param_2;
    local_84 = param_2;
    __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
    input_processor<char,__crt_stdio_input::string_input_adapter<char>_>
              (local_80,(string_input_adapter<char> *)&local_8c,CONCAT44(param_4,param_1._4_4_),
               local_98,(__crt_locale_pointers *)param_6,unaff_ESI);
    __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process
              (local_80);
    if (local_90 != '\0') {
      *(uint *)(local_9c + 0x350) = *(uint *)(local_9c + 0x350) & 0xfffffffd;
    }
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

