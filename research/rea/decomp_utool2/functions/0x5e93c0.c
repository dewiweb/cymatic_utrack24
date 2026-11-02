// rea decompile_all
// name: FUN_005e93c0
// address: 0x5e93c0
// body: available
// range: 0x5e93c0-0x5e946c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e93c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *in_ECX;
  void *in_EDX;
  int iVar5;
  
  _memset(in_EDX,0,0x70);
  *(int **)((int)in_EDX + 0x40) = in_ECX;
  *(undefined4 *)((int)in_EDX + 0x4c) = 0;
  *(undefined4 *)((int)in_EDX + 0x44) = 0;
  if (*in_ECX != 0) {
    iVar2 = FUN_004c5556(1,0x48);
    *(int *)((int)in_EDX + 0x68) = iVar2;
    iVar5 = 0;
    *(undefined4 *)(iVar2 + 4) = 0xc61c3c00;
    do {
      if (iVar5 == 7) {
        *(int *)(iVar2 + 0x28) = (int)in_EDX + 4;
      }
      else {
        uVar3 = FUN_004c5556(1,0x14);
        *(undefined4 *)(iVar2 + 0xc + iVar5 * 4) = uVar3;
      }
      puVar1 = *(undefined4 **)(iVar2 + 0xc + iVar5 * 4);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar4 = (undefined1 *)FUN_004c554b(0x100);
      iVar5 = iVar5 + 1;
      puVar1[2] = puVar4;
      puVar1[3] = puVar4;
      *puVar4 = 0;
      puVar1[4] = 0x100;
    } while (iVar5 < 0xf);
  }
  return 0;
}

