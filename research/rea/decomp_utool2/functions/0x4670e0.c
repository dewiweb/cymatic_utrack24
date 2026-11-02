// rea decompile_all
// name: FUN_004670e0
// address: 0x4670e0
// body: available
// range: 0x4670e0-0x4671dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004670e0(int param_1,char param_2)

{
  int iVar1;
  int in_ECX;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 != '\0') {
    *(undefined4 *)(in_ECX + 0x510) = 0;
    *(undefined4 *)(in_ECX + 0x514) = 0;
    *(undefined1 *)(in_ECX + 0x50e) = 0;
    return 0;
  }
  if (*(int *)(in_ECX + 0x514) <= *(int *)(in_ECX + 0x510) + param_1) {
    if (*(char *)(in_ECX + 0x50e) != '\0') {
      return 0xffffffff;
    }
    *(undefined1 *)(in_ECX + 8) = *(undefined1 *)(*(int *)(in_ECX + 0x518) + 6 + in_ECX);
    *(undefined1 *)(in_ECX + 9) = *(undefined1 *)(*(int *)(in_ECX + 0x518) + 7 + in_ECX);
    iVar1 = FUN_00466bd0(in_ECX + 10);
    if (iVar1 == 0) {
      *(undefined1 *)(in_ECX + 0x50e) = 1;
    }
    *(int *)(in_ECX + 0x510) = *(int *)(in_ECX + 0x510) + (0x10 - *(int *)(in_ECX + 0x514));
    *(int *)(in_ECX + 0x518) = iVar1 + 2;
    *(int *)(in_ECX + 0x514) = (iVar1 + 2) * 8;
  }
  iVar1 = *(int *)(in_ECX + 0x510);
  uVar3 = 0;
  if (0 < param_1) {
    bVar2 = (byte)iVar1 & 7;
    bVar2 = '\x01' << bVar2 | 1U >> 8 - bVar2;
    iVar1 = 0;
    do {
      iVar4 = iVar1 + 1;
      uVar3 = uVar3 | (uint)((*(byte *)((*(int *)(in_ECX + 0x510) + iVar1 >> 3) + 8 + in_ECX) &
                             bVar2) != 0) << ((byte)iVar1 & 0x1f);
      bVar2 = bVar2 << 1 | (char)bVar2 < '\0';
      iVar1 = iVar4;
    } while (iVar4 < param_1);
    iVar1 = *(int *)(in_ECX + 0x510);
  }
  *(int *)(in_ECX + 0x510) = iVar1 + param_1;
  return uVar3;
}

