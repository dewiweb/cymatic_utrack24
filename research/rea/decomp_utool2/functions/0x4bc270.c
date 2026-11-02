// rea decompile_all
// name: FUN_004bc270
// address: 0x4bc270
// body: available
// range: 0x4bc270-0x4bc376 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bc270(int param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  int iVar1;
  undefined4 uVar2;
  void *local_50;
  undefined1 local_30 [16];
  undefined1 local_20 [4];
  int local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007046c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040e4d0(local_30);
  FUN_0040e430(local_20,param_2);
  if ((0.0 < local_18) && (0.0 < local_14)) {
    FUN_0067d1f0(local_20);
    local_8 = 0;
    FUN_0067c730(in_ECX + 8);
    if (*(char *)(param_1 + 0x5c) == '\0') {
      uVar2 = 0;
      iVar1 = *(int *)(param_1 + 0x58) + 0x78;
      FUN_004bdec0(iVar1,0);
      FUN_004be520(*(int *)(param_1 + 0x58) + 0x78,iVar1,uVar2);
      iVar1 = *(int *)(param_1 + 0x58);
      FUN_004b98a0(iVar1 + 8,iVar1 + 0x78,*(int *)(iVar1 + 0x60) + 8);
    }
    local_1c = *(int *)(param_1 + 0x58) + 0x78;
    local_18 = (float)param_3;
    FUN_004be590(&local_1c);
    FID_conflict__free(local_50);
  }
  ExceptionList = local_10;
  return;
}

