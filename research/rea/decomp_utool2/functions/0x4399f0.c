// rea decompile_all
// name: FUN_004399f0
// address: 0x4399f0
// body: available
// range: 0x4399f0-0x439b0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004399f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint _Size;
  int iVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fe556;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(double *)(in_ECX + 8) =
       (double)*(int *)(param_1 + 0x10) +
       (double)(&DAT_00c24bb0)[-(*(int *)(param_1 + 0x10) >> 0x1f)];
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(in_ECX + 0x20) = iVar1;
  iVar2 = *(int *)(param_1 + 4) * 2;
  local_8 = 0;
  if ((iVar2 != *(int *)(in_ECX + 0x58)) || (iVar1 != *(int *)(in_ECX + 0x54))) {
    uVar6 = iVar2 + 3U & 0xfffffffc;
    uVar4 = iVar1 * 4 + 0x13U & 0xfffffff0;
    iVar3 = uVar6 * iVar1;
    _Size = uVar4 + iVar3 * 4 + 0x20;
    if (*(uint *)(in_ECX + 0x5c) < _Size) {
      *(uint *)(in_ECX + 0x5c) = _Size;
      FUN_00403500(_Size,CONCAT31((int3)((uint)iVar3 >> 8),*(char *)(in_ECX + 0xe8) != '\0'));
      *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(in_ECX + 100);
    }
    else if (*(char *)(in_ECX + 0xe8) != '\0') {
      _memset(*(void **)(in_ECX + 100),0,_Size);
    }
    iVar3 = 0;
    iVar5 = *(int *)(in_ECX + 100) + uVar4;
    if (0 < iVar1) {
      do {
        *(int *)(*(int *)(in_ECX + 0x60) + iVar3 * 4) = iVar5;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + uVar6 * 4;
      } while (iVar3 < iVar1);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x60) + iVar1 * 4) = 0;
    *(int *)(in_ECX + 0x58) = iVar2;
    *(int *)(in_ECX + 0x54) = iVar1;
  }
  ExceptionList = local_10;
  return;
}

