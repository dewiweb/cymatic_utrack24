// rea decompile_all
// name: FUN_005d31d0
// address: 0x5d31d0
// body: available
// range: 0x5d31d0-0x5d3348 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005d31d0(undefined4 param_1,undefined4 param_2,int param_3,code *param_4,int param_5,
                int param_6)

{
  undefined4 *puVar1;
  void *_Memory;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int *in_EDX;
  void *local_14;
  int local_10;
  int iStack_c;
  
  if ((in_ECX == 0) || (param_4 == (code *)0x0)) {
    iVar2 = -1;
  }
  else {
    iVar2 = (*param_4)();
  }
  local_14 = (void *)0x0;
  local_10 = 0;
  _memset(in_EDX,0,0x2d0);
  *in_EDX = in_ECX;
  in_EDX[0xb0] = param_3;
  in_EDX[0xb1] = (int)param_4;
  in_EDX[0xb2] = param_5;
  in_EDX[0xb3] = param_6;
  if (in_EDX + 6 != (int *)0x0) {
    in_EDX[6] = 0;
    in_EDX[7] = 0;
    in_EDX[8] = 0;
    in_EDX[9] = 0;
    in_EDX[10] = 0;
    in_EDX[0xb] = 0;
    in_EDX[0xc] = 0;
  }
  if (iVar2 != -1) {
    in_EDX[1] = 1;
  }
  in_EDX[0xd] = 1;
  iVar2 = FUN_004c5556(1,0x20);
  in_EDX[0x12] = iVar2;
  iVar2 = FUN_004c5556(in_EDX[0xd],0x10);
  in_EDX[0x13] = iVar2;
  FUN_005eaa00();
  iVar3 = FUN_005d40a0(in_EDX[0x13],&local_14,&local_10,0);
  iVar2 = local_10;
  _Memory = local_14;
  iStack_c = iVar3;
  if (iVar3 < 0) {
    *in_EDX = 0;
    FUN_005d3020();
  }
  else {
    piVar4 = (int *)FUN_004c5556(local_10 + 2,4);
    in_EDX[0x10] = (int)piVar4;
    in_EDX[0x17] = in_EDX[0x72];
    *piVar4 = in_EDX[0x72];
    *(int *)(in_EDX[0x10] + 4) = iVar2;
    FUN_004c2c30(in_EDX[0x10] + 8,_Memory,iVar2 * 4);
    iVar2 = FUN_004c5556(1,8);
    in_EDX[0xe] = iVar2;
    iVar2 = FUN_004c5556(1,8);
    in_EDX[0xf] = iVar2;
    puVar1 = (undefined4 *)in_EDX[0xe];
    *puVar1 = 0;
    puVar1[1] = 0;
    piVar4 = (int *)in_EDX[0xf];
    *piVar4 = in_EDX[2];
    piVar4[1] = in_EDX[3];
    in_EDX[0x16] = 1;
    iVar3 = iStack_c;
  }
  if (_Memory != (void *)0x0) {
    FID_conflict__free(_Memory);
  }
  return iVar3;
}

