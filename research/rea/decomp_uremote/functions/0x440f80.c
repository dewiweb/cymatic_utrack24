// rea decompile_all
// name: FUN_00440f80
// address: 0x440f80
// body: available
// range: 0x440f80-0x44101b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440f80(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  
  cVar1 = FUN_004410bd(*(undefined4 *)(param_1 + 0x14));
  if (cVar1 != '\0') {
    iVar2 = FUN_004c4910();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)FUN_004c6d53();
      *(undefined4 *)(in_ECX + 0x94) = *puVar3;
      *(undefined4 *)(in_ECX + 0x98) = puVar3[1];
      if ((*(int *)(in_ECX + 0x90) < 2) && ((*(uint *)(param_1 + 0x10) >> 5 & 1) == 0)) {
        if ((*(uint *)(param_1 + 0x10) >> 4 & 1) != 0) {
          uVar4 = FUN_004c6e00();
          uVar5 = FUN_004c6df1(uVar4);
          FUN_0044181b(uVar5,uVar4);
        }
      }
      else {
        uVar4 = FUN_004c6e00();
        FUN_004c6df1(uVar4);
        FUN_00441761(uVar4);
      }
    }
  }
  return;
}

