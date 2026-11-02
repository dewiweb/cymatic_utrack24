// rea decompile_all
// name: FUN_004c4392
// address: 0x4c4392
// body: available
// range: 0x4c4392-0x4c443e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c4392(char param_1)

{
  int unaff_EBX;
  int iVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((param_1 == '\0') || (param_1 = '\x01', (*(byte *)(unaff_EBX + 0x20) & 0x70) == 0)) {
    param_1 = '\0';
  }
  *(undefined1 *)(unaff_EBX + 0x25) = 0;
  if (param_1 != *(char *)(unaff_EBX + 0x24)) {
    if (param_1 == '\0') {
      if (*(int *)(unaff_EBX + 0x28) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(unaff_EBX + 0x28) + 8);
      }
      if (iVar1 != 0) {
        uStack_3c = 0;
        uStack_40 = 0;
        uStack_44 = 0;
        uStack_48 = 0;
        FUN_004f8845(&uStack_48);
        FUN_004c0848();
        FUN_0043bc2d();
        FUN_004f5eb8();
        uStack_44 = 0x4c4420;
        FUN_004c36b9();
      }
    }
    *(char *)(unaff_EBX + 0x24) = param_1;
    *(undefined4 *)(unaff_EBX + 0x18) = 0;
    uStack_3c = 1;
    *(undefined4 *)(unaff_EBX + 0x1c) = 0;
    uStack_40 = 0x4c4437;
    FUN_004c4669();
  }
  return;
}

