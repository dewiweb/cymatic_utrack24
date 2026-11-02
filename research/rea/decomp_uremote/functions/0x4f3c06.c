// rea decompile_all
// name: FUN_004f3c06
// address: 0x4f3c06
// body: available
// range: 0x4f3c06-0x4f3c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f3c06(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EDI;
  undefined4 uStack_38;
  int iStack_34;
  undefined1 *puStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined4 local_8;
  
  iStack_28 = 0x4f3c13;
  local_8 = FUN_004c4e62();
  iStack_28 = 0x4f3c1e;
  FUN_004c554d();
  if ((char)unaff_EDI[0x16] != '\0') {
    iStack_28 = 0x4f3c2b;
    cVar1 = (**(code **)(*unaff_EDI + 0x34))();
    if (cVar1 == '\0') {
      local_c = (undefined1 *)&iStack_2c;
      puStack_30 = local_1c;
      iStack_34 = unaff_EDI[1];
      uStack_38 = 0x4f3c42;
      piVar2 = (int *)FUN_004c0848();
      iStack_2c = piVar2[2] / 2 + *piVar2;
      iStack_28 = piVar2[3] / 2 + piVar2[1];
      puStack_30 = (undefined1 *)0x4f3c6b;
      iVar3 = FUN_004c53da();
      iStack_28 = 0x614;
      local_c = (undefined1 *)&uStack_38;
      FUN_004f8ef7(*(undefined8 *)(iVar3 + 0x20));
      FUN_004f0b22();
    }
  }
  return;
}

