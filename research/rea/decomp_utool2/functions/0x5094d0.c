// rea decompile_all
// name: FUN_005094d0
// address: 0x5094d0
// body: available
// range: 0x5094d0-0x509609 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005094d0(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007082aa;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (*(char *)(in_ECX + 0x128) != '\0') {
    puVar3 = (undefined4 *)FUN_0063bf80(local_24);
    (**(code **)(*(int *)*puVar3 + 0xc))(puVar3 + 2,uVar2);
    (**(code **)(*local_24[0] + 0x54))(local_1c);
    operator_new(0x90);
    local_8 = 0;
    piVar4 = (int *)FUN_00508d90();
    local_8 = 0xffffffff;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x28))(1);
      FUN_006e5050(piVar4,0xffffffff);
    }
    iVar5 = *(int *)(in_ECX + 0x124) + 1;
    if (*(int *)(in_ECX + 0x120) < iVar5) {
      FUN_00409cf0(iVar5 / 2 + *(int *)(in_ECX + 0x124) + 9 & 0xfffffff8);
    }
    iVar5 = *(int *)(in_ECX + 0x124);
    *(int *)(in_ECX + 0x124) = iVar5 + 1;
    *(int **)(*(int *)(in_ECX + 0x11c) + iVar5 * 4) = piVar4;
    *(undefined1 *)(in_ECX + 0x128) = 0;
    FUN_00509710();
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x7c) + 0x10);
    if (pcVar1 == FUN_0050d7e0) {
      *(undefined1 *)((int)*(int **)(in_ECX + 0x7c) + 0x3d) = 1;
      FUN_00515db0(1);
    }
    else {
      (*pcVar1)(in_ECX + 0xa0);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

