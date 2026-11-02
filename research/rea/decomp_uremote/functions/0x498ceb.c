// rea decompile_all
// name: FUN_00498ceb
// address: 0x498ceb
// body: available
// range: 0x498ceb-0x498d69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00498ceb(undefined4 *param_1)

{
  ushort uVar1;
  int in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBX;
  
  if ((in_EAX != 0) && (unaff_EBX != 0)) {
    if ((*(ushort *)(unaff_EBX + 0x14) != 0) && (*(ushort *)(unaff_EBX + 0x14) < 0x101)) {
      FUN_0048f0ec();
      puVar2 = (undefined4 *)FUN_0049176b();
      *(undefined4 **)(unaff_EBX + 0xcc) = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        *(uint *)(unaff_EBX + 0xe8) = *(uint *)(unaff_EBX + 0xe8) | 8;
        if (*(short *)(unaff_EBX + 0x14) != 0) {
          uVar1 = *(ushort *)(unaff_EBX + 0x14);
          for (uVar3 = (uint)(uVar1 >> 1); uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar2 = *param_1;
            param_1 = param_1 + 1;
            puVar2 = puVar2 + 1;
          }
          for (uVar3 = (uint)((uVar1 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined2 *)puVar2 = *(undefined2 *)param_1;
            param_1 = (undefined4 *)((int)param_1 + 2);
            puVar2 = (undefined4 *)((int)puVar2 + 2);
          }
        }
        *(uint *)(unaff_EBX + 8) = *(uint *)(unaff_EBX + 8) | 0x40;
        return;
      }
    }
    FUN_00491216();
  }
  return;
}

