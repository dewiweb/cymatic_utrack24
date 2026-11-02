// rea decompile_all
// name: FUN_0048feef
// address: 0x48feef
// body: available
// range: 0x48feef-0x48ffbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048feef(uint param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = *(ushort *)((int)unaff_EBX + 0x4a);
  if ((uVar1 & 0x8000) == 0) {
    if ((3 < param_1) || (((uVar1 & 4) != 0 && (*(ushort *)(unaff_EBX + 0x12) != param_1)))) {
      uVar3 = FUN_0048fdfd();
      return uVar3;
    }
    if ((uVar1 & 0x20) == 0) {
      if (((uVar1 & 2) != 0) && (iVar2 = FUN_0048fb63(), iVar2 == 0)) {
        FUN_004914c8(2);
      }
      FUN_0048f5e4();
      *(undefined2 *)(unaff_EBX + 0x12) = (undefined2)param_1;
      *(ushort *)((int)unaff_EBX + 0x4a) = *(ushort *)((int)unaff_EBX + 0x4a) | 0xe7;
      puVar4 = &DAT_005ff5d8;
      puVar5 = unaff_EBX;
      for (iVar2 = 8; puVar5 = puVar5 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
      }
      puVar5 = &DAT_0091936c;
      puVar4 = unaff_EBX + 9;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      *unaff_EBX = 0xb18f;
      return 1;
    }
    FUN_00491371();
  }
  return 0;
}

