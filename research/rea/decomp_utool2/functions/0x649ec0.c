// rea decompile_all
// name: FUN_00649ec0
// address: 0x649ec0
// body: available
// range: 0x649ec0-0x649ffd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x649ff6 to 0x64b3c0 FUN_0064b3c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00649ec0(void)

{
  undefined1 uVar1;
  uint uVar2;
  int in_ECX;
  int *in_EDX;
  undefined1 *puVar3;
  int iVar4;
  
  if (in_ECX != 0) {
    if (((*(uint *)(in_ECX + 0x30) & 0x100000) != 0) && (*(code **)(in_ECX + 0x1c) != (code *)0x0))
    {
      (**(code **)(in_ECX + 0x1c))();
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x8000) != 0) {
      FUN_0064b190(~(*(uint *)(in_ECX + 0x2c) >> 7) & 1);
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x10000) != 0) {
      FUN_0064b330();
    }
    if ((*(byte *)(in_ECX + 0x30) & 4) != 0) {
      FUN_00649d90(*(undefined1 *)(in_ECX + 0x10c));
    }
    uVar2 = *(uint *)(in_ECX + 0x30);
    if (((uVar2 & 0x10) != 0) && (*(char *)((int)in_EDX + 9) == '\x10')) {
      iVar4 = (uint)*(byte *)((int)in_EDX + 10) * *in_EDX;
      puVar3 = (undefined1 *)(*(int *)(in_ECX + 0xd8) + 1);
      if (iVar4 != 0) {
        do {
          uVar1 = *puVar3;
          *puVar3 = puVar3[1];
          puVar3[1] = uVar1;
          iVar4 = iVar4 + -1;
          puVar3 = puVar3 + 2;
        } while (iVar4 != 0);
        uVar2 = *(uint *)(in_ECX + 0x30);
      }
    }
    if ((uVar2 & 8) != 0) {
      FUN_00649b30(in_ECX + 0x161);
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x20000) != 0) {
      FUN_00649a30();
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x80000) != 0) {
      FUN_006499b0();
    }
    if ((*(byte *)(in_ECX + 0x30) & 1) != 0) {
      FUN_0064b0d0();
    }
    if ((*(byte *)(in_ECX + 0x30) & 0x20) != 0) {
      FUN_0064b3c0();
      return;
    }
  }
  return;
}

