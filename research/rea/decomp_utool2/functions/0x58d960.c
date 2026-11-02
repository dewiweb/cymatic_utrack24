// rea decompile_all
// name: FUN_0058d960
// address: 0x58d960
// body: available
// range: 0x58d960-0x58da6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058d960(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *in_ECX;
  bool bVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713fc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0058ea30(param_3);
  local_8 = 0;
  in_ECX[0x36] = param_1;
  in_ECX[0x37] = param_2;
  *(undefined1 *)(in_ECX + 0x38) = param_4;
  *in_ECX = Exportjob_Song::vftable;
  in_ECX[0x39] = param_5;
  FUN_0062f660(8);
  in_ECX[0x3b] = ReaderThreadPool::vftable;
  FUN_0062f450(6);
  local_8._0_1_ = 1;
  FUN_0062f660(8);
  in_ECX[0x49] = ResamplerThreadPool::vftable;
  FUN_0062f450(6);
  local_8 = CONCAT31(local_8._1_3_,2);
  switch(in_ECX[0x36]) {
  default:
    bVar2 = 0;
    break;
  case 3:
  case 4:
    bVar2 = 1;
  }
  *(byte *)(in_ECX + 0x3a) = bVar2;
  bVar3 = *(int *)(param_2 + 0x30) == 1;
  *(bool *)((int)in_ECX + 0xe9) = bVar3;
  *(byte *)(in_ECX + 0x3a) = bVar3 | bVar2;
  uVar1 = FUN_00540610();
  *(undefined1 *)((int)in_ECX + 0xea) = uVar1;
  ExceptionList = local_10;
  return;
}

