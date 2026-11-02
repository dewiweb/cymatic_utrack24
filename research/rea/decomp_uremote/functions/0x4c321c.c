// rea decompile_all
// name: FUN_004c321c
// address: 0x4c321c
// body: available
// range: 0x4c321c-0x4c32c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c321c(int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int iVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = 0x4c322d;
  FUN_004c4e62();
  iStack_2c = 0x4c3232;
  piVar3 = (int *)FUN_004c5094();
  iVar6 = *piVar3;
  iVar1 = iVar6 + piVar3[2] * 4;
  do {
    if (iVar6 == iVar1) {
      return 0;
    }
    iStack_2c = 0x4c3249;
    iVar4 = FUN_004c4949();
    iVar5 = extraout_ECX;
    if (iVar4 == param_1) {
LAB_004c3262:
      iStack_30 = iVar5;
      FUN_004c4923(&uStack_38);
      FUN_004c0902(0);
      uStack_34 = 0x4c3282;
      FUN_004f5a5a();
      uStack_34 = 0;
      uStack_38 = 0x4c328b;
      cVar2 = FUN_004c0ee2();
      iVar5 = iVar6;
      if (cVar2 != '\0') {
        iStack_2c = 0x4c3298;
        cVar2 = FUN_004c490a();
        if (cVar2 != '\0') {
          return 1;
        }
        iStack_2c = 0x4c32a5;
        cVar2 = FUN_004c4916();
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
    else {
      iVar5 = extraout_ECX;
      if (param_2 != '\0') {
        iStack_2c = param_1;
        iStack_30 = 0x4c325e;
        cVar2 = thunk_FUN_004c1278();
        iVar5 = extraout_ECX_00;
        if (cVar2 != '\0') goto LAB_004c3262;
      }
    }
    iVar6 = iVar5 + 4;
  } while( true );
}

