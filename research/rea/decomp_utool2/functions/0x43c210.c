// rea decompile_all
// name: FUN_0043c210
// address: 0x43c210
// body: available
// range: 0x43c210-0x43c38d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043c210(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fe789;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  local_8 = 0;
  iVar4 = FUN_0062c730("LowNote",1,0);
  if ((-1 < iVar4) && (iVar4 = FUN_0062c730("HighNote",1,0), -1 < iVar4)) {
    if (in_ECX[1] != 8) {
      if (*in_ECX == 0) {
        uVar5 = 0;
        FID_conflict__free((void *)0x0);
        iVar4 = FUN_004c5556(8,1,uVar5,uVar3);
        *in_ECX = iVar4;
      }
      else {
        iVar4 = FUN_004c553b(*in_ECX,8);
        *in_ECX = iVar4;
        uVar3 = in_ECX[1];
        if (uVar3 < 8) {
          _memset((void *)(iVar4 + uVar3),0,8 - uVar3);
        }
      }
      in_ECX[1] = 8;
    }
    puVar1 = (undefined1 *)*in_ECX;
    uVar2 = FUN_004371a0(&DAT_00c146f8);
    *puVar1 = uVar2;
    uVar2 = FUN_004371a0(&DAT_00c146fc);
    puVar1[1] = uVar2;
    uVar2 = FUN_004371a0(&DAT_00c146fc);
    puVar1[2] = uVar2;
    uVar2 = FUN_004371a0(&DAT_00c146fc);
    puVar1[3] = uVar2;
    uVar2 = FUN_004371a0(&DAT_00c14700);
    puVar1[4] = uVar2;
    uVar2 = FUN_004371a0(&DAT_00c14704);
    puVar1[5] = uVar2;
    uVar2 = FUN_004371a0(&DAT_00c14700);
    puVar1[6] = uVar2;
  }
  ExceptionList = local_10;
  return;
}

