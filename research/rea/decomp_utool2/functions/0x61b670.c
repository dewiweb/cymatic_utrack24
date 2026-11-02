// rea decompile_all
// name: FUN_0061b670
// address: 0x61b670
// body: available
// range: 0x61b670-0x61b8c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0061b670(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar4 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071cead;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = FUN_0045c1e0(*param_2,&DAT_00c01614,uVar2);
  if (iVar3 == 0) {
LAB_0061b83a:
    FUN_00622070();
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = FUN_0045c1e0(*puVar4,&DAT_00c01638,uVar2);
  if (iVar3 == 0) {
    FUN_00622070();
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = FUN_0045c1e0(*puVar4,&DAT_00c01630,uVar2);
  if (iVar3 == 0) {
    FUN_00622070();
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = FUN_0045c1e0(*puVar4,&DAT_00c01644,uVar2);
  if (iVar3 == 0) {
    FUN_00622070();
    ExceptionList = local_10;
    return param_1;
  }
  cVar1 = FUN_00621c60(&DAT_00c01640);
  if (cVar1 != '\0') {
    FUN_00622070();
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = FUN_006354d0(0);
  if (iVar3 != 0x23) {
    FUN_0061af10(param_1,puVar4);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = FUN_006354d0(1);
  if ((iVar3 == 0x78) || (iVar3 == 0x58)) {
    puVar4 = (undefined4 *)FUN_00637a90(&param_2,2);
    local_8 = 0;
    FUN_0045d290(*puVar4);
  }
  else {
    if (9 < iVar3 - 0x30U) {
      FUN_0045c990("illegal escape sequence");
      FUN_0061d1c0(&param_2,0);
      FUN_00637c10();
      goto LAB_0061b83a;
    }
    puVar4 = (undefined4 *)FUN_00637a90(&param_2,1);
    local_8 = 1;
    FID_conflict__atoi((char *)*puVar4);
  }
  FUN_00622070();
  FUN_00637c10();
  ExceptionList = local_10;
  return param_1;
}

