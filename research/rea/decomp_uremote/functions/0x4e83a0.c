// rea decompile_all
// name: FUN_004e83a0
// address: 0x4e83a0
// body: available
// range: 0x4e83a0-0x4e8517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e83a0(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  char *local_40;
  uint uStack_3c;
  undefined1 *local_24;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4e83ac;
  pcVar1 = (char *)*param_2;
  cVar3 = *pcVar1;
  do {
    if (cVar3 == '\0') {
      return;
    }
    local_14 = 0;
    uStack_3c = 0x4e83d3;
    local_18 = pcVar1;
    cVar2 = FUN_0046095c();
    if (cVar2 == '\0') {
LAB_004e8418:
      uStack_3c = 0x4e8420;
      iVar4 = FUN_00460791();
      if (iVar4 == 0xd) {
        uStack_3c = 0x4e842d;
        FUN_004607e3();
        local_14 = 1;
        uStack_3c = 0x4e843c;
        iVar4 = FUN_00460791();
        if (iVar4 == 10) {
          uStack_3c = 0x4e8449;
          FUN_004607e3();
          uStack_3c = 0x4e8451;
          FUN_004607e3();
        }
      }
      else if (iVar4 == 10) {
        uStack_3c = 0x4e8460;
        FUN_004607e3();
        local_14 = 1;
      }
      else {
        while (cVar3 != '\0') {
          uStack_3c = 0x4e8475;
          cVar3 = FUN_0046095c();
          if (cVar3 != '\0') break;
          uStack_3c = 0x4e8481;
          FUN_004607e3();
          local_14 = local_14 + 1;
          cVar3 = *pcVar1;
        }
      }
    }
    else {
      uStack_3c = 0x4e83df;
      iVar4 = FUN_00460791();
      if ((iVar4 == 0xd) || (iVar4 == 10)) goto LAB_004e8418;
      while( true ) {
        uStack_3c = 0x4e83f1;
        FUN_004607e3();
        local_14 = local_14 + 1;
        uStack_3c = 0x4e83fc;
        cVar3 = FUN_0046095c();
        if (cVar3 == '\0') break;
        uStack_3c = 0x4e840c;
        iVar4 = FUN_00460791();
        if ((iVar4 == 0xd) || (iVar4 == 10)) break;
      }
    }
    uStack_3c = 0xc;
    local_40 = (char *)0x4e8493;
    iVar4 = FUN_005af82d();
    if (iVar4 != 0) {
      uStack_3c = 0x4e849f;
      FUN_004652cd();
    }
    uStack_3c = 0x4e84ac;
    iVar4 = FUN_004f7022();
    uStack_3c = local_14;
    local_24 = (undefined1 *)&local_40;
    local_40 = local_18;
    FUN_00465426(local_1c);
    local_40 = (char *)0x4e84cd;
    uStack_3c = iVar4;
    FUN_00465317();
    uStack_3c = 0x4e84d5;
    FUN_004652d6();
    local_40 = (char *)0x4e84e1;
    uStack_3c = iVar4;
    uStack_3c = FUN_004e7e2d();
    local_8 = 0;
    local_40 = (char *)0x4e84ee;
    fVar5 = (float10)FUN_0049fa7b();
    *(float *)(iVar4 + 4) = (float)fVar5;
    local_8 = 0xffffffff;
    uStack_3c = 0x4e84fc;
    FUN_004652d6();
    *(uint *)(iVar4 + 8) = local_14 & 0xffff;
    cVar3 = *pcVar1;
  } while( true );
}

