// rea decompile_all
// name: FUN_00475740
// address: 0x475740
// body: available
// range: 0x475740-0x475a40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00475740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int in_EDX;
  undefined1 local_78 [104];
  void *local_10;
  
  if (*(int *)(in_EDX + 4) == 1) {
    if (*(int *)(param_1 + 4) == 1) {
      if (param_5 != '\0') {
        FUN_00476780(in_EDX,param_1,param_3,param_2,param_4);
        FUN_00481d50(local_78);
        FID_conflict__free(local_10);
        return;
      }
      FUN_00476780(in_EDX,param_1,param_3,param_2,param_4);
      FUN_00481dd0(local_78);
      FID_conflict__free(local_10);
      return;
    }
    if (*(int *)(param_1 + 4) != 2) {
      if (param_5 != '\0') {
        FUN_00474010(in_EDX,param_1,param_3,param_2,param_4);
        FUN_00481e50(local_78);
        FID_conflict__free(local_10);
        return;
      }
      FUN_00474010(in_EDX,param_1,param_3,param_2,param_4);
      FUN_00481ed0(local_78);
      FID_conflict__free(local_10);
      return;
    }
    if (param_5 != '\0') {
      FUN_004741c0(in_EDX,param_1,param_3,param_2,param_4);
      FUN_00481c50(local_78);
      FID_conflict__free(local_10);
      return;
    }
    FUN_004741c0(in_EDX,param_1,param_3,param_2,param_4);
    FUN_00481cd0(local_78);
    FID_conflict__free(local_10);
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(in_EDX + 4) != 2) {
    if (iVar1 == 1) {
      if (param_5 != '\0') {
        FUN_00476780(in_EDX,param_1,param_3,param_2,param_4);
        FUN_00482050(local_78);
        FID_conflict__free(local_10);
        return;
      }
      FUN_00476780(in_EDX,param_1,param_3,param_2,param_4);
      FUN_004820d0(local_78);
      FID_conflict__free(local_10);
      return;
    }
    if (iVar1 != 2) {
      if (param_5 != '\0') {
        FUN_00474010(in_EDX,param_1,param_3,param_2,param_4);
        FUN_00482150(local_78);
        FID_conflict__free(local_10);
        return;
      }
      FUN_00474010(in_EDX,param_1,param_3,param_2,param_4);
      FUN_004821d0(local_78);
      FID_conflict__free(local_10);
      return;
    }
    if (param_5 != '\0') {
      FUN_004741c0(in_EDX,param_1,param_3,param_2,param_4);
      FUN_00481f50(local_78);
      FID_conflict__free(local_10);
      return;
    }
    FUN_004741c0(in_EDX,param_1,param_3,param_2,param_4);
    FUN_00481fd0(local_78);
    FID_conflict__free(local_10);
    return;
  }
  if (iVar1 == 1) {
    if (param_5 != '\0') {
      FUN_00476780(in_EDX,param_1,param_3,param_2,param_4);
      FUN_00481a50(local_78);
      FID_conflict__free(local_10);
      return;
    }
    FUN_00476780(in_EDX,param_1,param_3,param_2,param_4);
    FUN_00481ad0(local_78);
    FID_conflict__free(local_10);
    return;
  }
  if (iVar1 != 2) {
    if (param_5 != '\0') {
      FUN_00474010(in_EDX,param_1,param_3,param_2,param_4);
      FUN_00481b50(local_78);
      FID_conflict__free(local_10);
      return;
    }
    FUN_00474010(in_EDX,param_1,param_3,param_2,param_4);
    FUN_00481bd0(local_78);
    FID_conflict__free(local_10);
    return;
  }
  if (param_5 != '\0') {
    FUN_004741c0(in_EDX,param_1,param_3,param_2,param_4);
    FUN_00481950(local_78);
    FID_conflict__free(local_10);
    return;
  }
  FUN_004741c0(in_EDX,param_1,param_3,param_2,param_4);
  FUN_004819d0(local_78);
  FID_conflict__free(local_10);
  return;
}

