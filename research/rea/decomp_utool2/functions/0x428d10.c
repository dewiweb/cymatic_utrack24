// rea decompile_all
// name: FUN_00428d10
// address: 0x428d10
// body: available
// range: 0x428d10-0x428e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00428d10(void)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  int in_ECX;
  uint uVar3;
  size_t _Size;
  int iVar4;
  byte local_10 [4];
  int local_c;
  int local_8;
  
  if (0 < *(int *)(in_ECX + 0x20)) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x90) + 0xc))
                      (*(int **)(in_ECX + 0x90),&local_8,&local_c,local_10,0,0);
    iVar4 = local_c;
    while ((-1 < iVar1 && (local_c = iVar4, iVar4 != 0))) {
      for (; 0 < iVar4; iVar4 = iVar4 - iVar1) {
        uVar3 = *(uint *)(in_ECX + 0xa8) & *(uint *)(in_ECX + 0xa0);
        iVar2 = (*(uint *)(in_ECX + 0xa0) - uVar3) + 1;
        iVar1 = iVar4;
        if (iVar2 < iVar4) {
          iVar1 = iVar2;
        }
        _Size = *(int *)(in_ECX + 0x80) * iVar1;
        _Dst = (void *)(*(int *)(in_ECX + 0x80) * uVar3 + *(int *)(in_ECX + 0x94));
        if ((local_10[0] & 2) == 0) {
          FUN_004c2c30(_Dst,local_8);
        }
        else {
          _memset(_Dst,0,_Size);
        }
        *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) + iVar1;
        local_8 = local_8 + _Size;
      }
      if (*(int *)(in_ECX + 0x9c) < *(int *)(in_ECX + 0xa8) - *(int *)(in_ECX + 0xa4)) {
        *(int *)(in_ECX + 0xa4) = *(int *)(in_ECX + 0xa8) - *(int *)(in_ECX + 0x9c);
      }
      (**(code **)(**(int **)(in_ECX + 0x90) + 0x10))(*(int **)(in_ECX + 0x90),local_c);
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x90) + 0xc))
                        (*(int **)(in_ECX + 0x90),&local_8,&local_c,local_10,0,0);
      iVar4 = local_c;
    }
  }
  return;
}

