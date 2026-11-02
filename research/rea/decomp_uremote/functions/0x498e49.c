// rea decompile_all
// name: FUN_00498e49
// address: 0x498e49
// body: available
// range: 0x498e49-0x499002 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x498ef9 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00498e49(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 uint param_6,char *param_7,int param_8)

{
  undefined4 *puVar1;
  char *_Str;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  void *pvVar5;
  int unaff_EDI;
  int local_8;
  
  if ((((param_1 != 0) && (unaff_EDI != 0)) && (param_2 != (char *)0x0)) &&
     ((param_7 != (char *)0x0 && (((int)param_6 < 1 || (param_8 != 0)))))) {
    sVar2 = _strlen(param_2);
    if ((3 < param_5) || (0xff < param_6)) {
LAB_00498ef6:
                    /* WARNING: Subroutine does not return */
      FUN_00491122();
    }
    local_8 = 0;
    if (0 < (int)param_6) {
      do {
        _Str = *(char **)(param_8 + local_8 * 4);
        if (_Str == (char *)0x0) goto LAB_00498ef6;
        sVar3 = _strlen(_Str);
        iVar4 = FUN_00490936(sVar3);
        if (iVar4 == 0) goto LAB_00498ef6;
        local_8 = local_8 + 1;
      } while (local_8 < (int)param_6);
    }
    pvVar5 = (void *)FUN_0049176b();
    *(void **)(unaff_EDI + 0xd0) = pvVar5;
    if (pvVar5 != (void *)0x0) {
      _memcpy(pvVar5,param_2,sVar2 + 1);
      *(undefined4 *)(unaff_EDI + 0xd4) = param_3;
      *(undefined4 *)(unaff_EDI + 0xd8) = param_4;
      *(undefined1 *)(unaff_EDI + 0xe4) = (undefined1)param_5;
      *(char *)(unaff_EDI + 0xe5) = (char)param_6;
      sVar2 = _strlen(param_7);
      pvVar5 = (void *)FUN_0049176b();
      *(void **)(unaff_EDI + 0xdc) = pvVar5;
      if (pvVar5 != (void *)0x0) {
        _memcpy(pvVar5,param_7,sVar2 + 1);
        pvVar5 = (void *)FUN_0049176b();
        *(void **)(unaff_EDI + 0xe0) = pvVar5;
        if (pvVar5 != (void *)0x0) {
          _memset(pvVar5,0,param_6 * 4 + 4);
          local_8 = 0;
          if (0 < (int)param_6) {
            do {
              puVar1 = (undefined4 *)(param_8 + local_8 * 4);
              sVar2 = _strlen((char *)*puVar1);
              pvVar5 = (void *)FUN_0049176b();
              *(void **)(*(int *)(unaff_EDI + 0xe0) + local_8 * 4) = pvVar5;
              if (pvVar5 == (void *)0x0) goto LAB_00498ff9;
              _memcpy(pvVar5,(void *)*puVar1,sVar2 + 1);
              local_8 = local_8 + 1;
            } while (local_8 < (int)param_6);
          }
          *(uint *)(unaff_EDI + 8) = *(uint *)(unaff_EDI + 8) | 0x400;
          *(uint *)(unaff_EDI + 0xe8) = *(uint *)(unaff_EDI + 0xe8) | 0x80;
          return;
        }
      }
    }
LAB_00498ff9:
    FUN_00491216();
  }
  return;
}

