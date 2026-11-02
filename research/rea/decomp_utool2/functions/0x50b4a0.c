// rea decompile_all
// name: FUN_0050b4a0
// address: 0x50b4a0
// body: available
// range: 0x50b4a0-0x50b5a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050b4a0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int in_ECX;
  undefined4 uVar4;
  bool bVar5;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070857f;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x744) != '\0') goto LAB_0050b588;
  if (param_1 == in_ECX + 0x45c) {
    local_8 = 0;
    puVar2 = (undefined4 *)FUN_0063bf80(local_24);
    cVar1 = (**(code **)(*(int *)*puVar2 + 0x14))(puVar2 + 2);
    (**(code **)(*local_24[0] + 0x54))(local_1c);
    local_8 = 0xffffffff;
    bVar5 = cVar1 == '\0';
    uVar4 = *(undefined4 *)(in_ECX + 8);
    pcVar3 = *(code **)(**(int **)(in_ECX + 0x740) + 0x10);
    if (pcVar3 == FUN_0050ff50) {
      if ((*(int **)(in_ECX + 0x740))[1] != 0) {
        FUN_0050dcc0(uVar4,bVar5);
      }
      goto LAB_0050b588;
    }
  }
  else {
    if (param_1 != in_ECX + 0x344) goto LAB_0050b588;
    cVar1 = FUN_0040e1f0(local_14);
    bVar5 = cVar1 == '\0';
    uVar4 = *(undefined4 *)(in_ECX + 8);
    pcVar3 = *(code **)(**(int **)(in_ECX + 0x740) + 0x14);
    if (pcVar3 == FUN_0050ff30) {
      if ((*(int **)(in_ECX + 0x740))[1] != 0) {
        FUN_0050da40(uVar4,bVar5);
      }
      goto LAB_0050b588;
    }
  }
  (*pcVar3)(uVar4,bVar5);
LAB_0050b588:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

