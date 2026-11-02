// rea decompile_all
// name: FUN_004b9410
// address: 0x4b9410
// body: available
// range: 0x4b9410-0x4b956c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b9410(undefined8 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 extraout_ECX;
  undefined1 local_40c [1028];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (*(char *)(in_ECX + 0x1c) != '\0') {
    *(undefined1 *)(in_ECX + 0x1c) = 0;
    if (*(int *)(in_ECX + 0x14) < 10) {
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x14);
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      puVar1 = operator_new(0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar2 = *(int *)(in_ECX + 0x14) + 1;
      if (*(int *)(in_ECX + 0x10) < iVar2) {
        FUN_00409cf0(iVar2 / 2 + *(int *)(in_ECX + 0x14) + 9 & 0xfffffff8);
      }
      iVar2 = *(int *)(in_ECX + 0x14);
      *(int *)(in_ECX + 0x14) = iVar2 + 1;
      *(undefined4 **)(*(int *)(in_ECX + 0xc) + iVar2 * 4) = puVar1;
    }
    else {
      *(int *)(in_ECX + 0x18) = (*(int *)(in_ECX + 0x18) + 1) % 10;
    }
    _eh_vector_constructor_iterator_
              (local_40c,4,0x100,(_func_void_void_ptr *)&LAB_00464380,guard_check_icall);
    FUN_0067eb00(local_40c,0x100);
    FUN_006f3df0(0x100,1,local_40c,extraout_ECX,0);
    _eh_vector_destructor_iterator_(local_40c,4,0x100,guard_check_icall);
  }
  iVar2 = **(int **)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x18) * 4);
  if (*(int *)((int)param_1 + *(int *)(param_1 + 2) * 4) != iVar2) {
    *(int *)((int)param_1 + *(int *)(param_1 + 2) * 4) = iVar2;
    glBindTexture(0xde1,iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

