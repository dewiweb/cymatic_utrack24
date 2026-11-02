// rea decompile_all
// name: FUN_0059af50
// address: 0x59af50
// body: available
// range: 0x59af50-0x59b055 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059af50(int param_1,undefined4 param_2)

{
  int iVar1;
  void **ppvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071588f;
  iVar1 = *(int *)(in_ECX + 0xc);
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar2, iVar1 <= param_1) {
    operator_new(0x3c);
    local_8 = 0;
    uVar3 = FUN_0059b280();
    local_8 = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0xc);
    iVar5 = iVar1 + 1;
    if ((int)*(uint *)(in_ECX + 8) < iVar5) {
      if (iVar5 < 0) {
        iVar5 = iVar1 + 2;
      }
      uVar6 = iVar1 + 9 + (iVar5 >> 1) & 0xfffffff8;
      if (*(uint *)(in_ECX + 8) != uVar6) {
        if ((int)uVar6 < 1) {
          FID_conflict__free(*(void **)(in_ECX + 4));
          *(undefined4 *)(in_ECX + 4) = 0;
        }
        else if (*(int *)(in_ECX + 4) == 0) {
          uVar4 = FUN_004c554b();
          *(undefined4 *)(in_ECX + 4) = uVar4;
        }
        else {
          uVar4 = FUN_004c553b(*(int *)(in_ECX + 4),uVar6 * 4);
          *(undefined4 *)(in_ECX + 4) = uVar4;
        }
        *(uint *)(in_ECX + 8) = uVar6;
      }
    }
    iVar1 = *(int *)(in_ECX + 0xc);
    *(int *)(in_ECX + 0xc) = iVar1 + 1;
    *(undefined4 *)(*(int *)(in_ECX + 4) + iVar1 * 4) = uVar3;
    ppvVar2 = ExceptionList;
    iVar1 = *(int *)(in_ECX + 0xc);
  }
  FUN_0062f560(param_2,1);
  ExceptionList = local_10;
  return;
}

