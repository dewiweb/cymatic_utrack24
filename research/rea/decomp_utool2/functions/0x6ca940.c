// rea decompile_all
// name: FUN_006ca940
// address: 0x6ca940
// body: available
// range: 0x6ca940-0x6caab0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ca940(void)

{
  void *_Memory;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0072627a;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  _Memory = (void *)*in_ECX;
  *in_ECX = 0;
  in_ECX[1] = 0;
  iVar3 = DAT_00c8a67c;
  in_ECX[2] = 0;
  if (iVar3 == 0) {
    operator_new(0xd0);
    local_8 = 1;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8 = 0;
  FUN_00686700(uVar2);
  cVar1 = FUN_004b32f0(in_ECX);
  if (cVar1 == '\0') {
    local_8 = 2;
    if (DAT_00c8a67c == 0) {
      operator_new(0xd0);
      DAT_00c8a67c = FUN_006cb960();
    }
    uVar2 = *(uint *)(DAT_00c8a67c + 0x50);
    local_8 = 0;
    iVar3 = DAT_00c8a67c;
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      local_8 = 3;
      if (iVar3 == 0) {
        operator_new(0xd0);
        iVar3 = FUN_006cb960();
        DAT_00c8a67c = iVar3;
      }
      if (uVar2 < *(uint *)(iVar3 + 0x50)) {
        piVar4 = *(int **)(*(int *)(iVar3 + 0x48) + uVar2 * 4);
      }
      else {
        piVar4 = (int *)0x0;
      }
      local_8 = 0;
      if (piVar4 != (int *)0x0) {
        if ((undefined **)*piVar4 == juce::HWNDComponentPeer::vftable) {
          DAT_00c8a9c8 = DAT_00c8a9dc;
          (**(code **)(*(int *)piVar4[1] + 0x90))();
          FUN_0068ce30();
          iVar3 = DAT_00c8a67c;
        }
        else {
          (*(code *)((undefined **)*piVar4)[0x14])();
          iVar3 = DAT_00c8a67c;
        }
      }
    }
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

