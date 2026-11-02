// rea decompile_all
// name: FUN_006e73e0
// address: 0x6e73e0
// body: available
// range: 0x6e73e0-0x6e74b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e73e0(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int *in_ECX;
  bool bVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 local_8 [4];
  
  puStack_20 = local_8;
  uStack_18 = 0;
  uStack_1c = 0x1002800;
  uStack_24 = 0x6e73fa;
  iVar3 = FUN_006e8e70();
  bVar1 = *(byte *)(in_ECX + 0x1a);
  bVar5 = *(char *)(iVar3 + 3) == -1;
  if (bVar5 != (bool)(bVar1 >> 2 & 1)) {
    *(byte *)(in_ECX + 0x1a) = bVar1 & 0xfb | bVar5 << 2;
    if ((bVar1 & 1) != 0) {
      uStack_18 = 0x6e7426;
      iVar3 = FUN_0068db10();
      if (iVar3 != 0) {
        uStack_18 = 0;
        uStack_1c = *(undefined4 *)(iVar3 + 8);
        puStack_20 = (undefined1 *)0x6e7436;
        (**(code **)(*in_ECX + 0x30))();
      }
    }
    FUN_006e6400(&uStack_24);
    FUN_006ce9f0(1);
  }
  piVar2 = (int *)in_ECX[0x1f];
  bVar4 = *(byte *)(in_ECX + 0x1a) >> 2 & 1;
  bVar1 = *(byte *)(piVar2 + 0x1a);
  if (bVar4 != (bVar1 >> 2 & 1)) {
    *(byte *)(piVar2 + 0x1a) = bVar1 & 0xfb | bVar4 << 2;
    if ((bVar1 & 1) != 0) {
      uStack_18 = 0x6e747b;
      iVar3 = FUN_0068db10();
      if (iVar3 != 0) {
        uStack_18 = 0;
        uStack_1c = *(undefined4 *)(iVar3 + 8);
        puStack_20 = (undefined1 *)0x6e748b;
        (**(code **)(*piVar2 + 0x30))();
      }
    }
    FUN_006e6400(&uStack_24);
    FUN_006ce9f0(1);
  }
  FUN_006e6400(&uStack_24);
  FUN_006ce9f0(1);
  return;
}

