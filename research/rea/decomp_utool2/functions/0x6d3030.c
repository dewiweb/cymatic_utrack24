// rea decompile_all
// name: FUN_006d3030
// address: 0x6d3030
// body: available
// range: 0x6d3030-0x6d3246 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d3030(void)

{
  byte bVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007270d4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_30 = 0x6d306d;
  FUN_0045c990();
  uStack_30 = 0x6d307b;
  FUN_006cfeb0();
  local_8 = 0;
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      uStack_30 = 0x6d30a3;
      FID_conflict__free(piVar3);
    }
  }
  in_ECX[0x1c] = (int)juce::Timer::vftable;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  *in_ECX = (int)juce::TooltipWindow::vftable;
  in_ECX[0x1c] = (int)juce::TooltipWindow::vftable;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = (int)&DAT_00bfe12c;
  in_ECX[0x25] = (int)&DAT_00bfe12c;
  iVar2 = DAT_00c8a67c;
  local_8._0_1_ = 3;
  in_ECX[0x26] = 700;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  *(undefined1 *)(in_ECX + 0x2b) = 0;
  if (iVar2 == 0) {
    uStack_30 = 0x6d3159;
    operator_new(0xd0);
    local_8._0_1_ = 4;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8._0_1_ = 3;
  uStack_30 = 0x6d317e;
  piVar3 = (int *)FUN_006cb390();
  if (*(char *)(*piVar3 + 0xc) != '\0') {
    uStack_30 = 0x6d3192;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    if (in_ECX[0x1e] == 0) {
      in_ECX[0x1d] = 0x7b;
      in_ECX[0x1e] = 0x7b;
      local_8._0_1_ = 5;
      if (DAT_00c8a668 == 0) {
        uStack_30 = 0x6d31ba;
        operator_new(0x54);
        DAT_00c8a668 = FUN_004635f0();
      }
      uStack_30 = 0x6d31d1;
      FUN_00463c00();
      local_8._0_1_ = 3;
    }
    else {
      FUN_00463b90();
    }
    uStack_30 = 0x6d31ee;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  }
  uStack_30 = 0x6d31f7;
  FUN_006d1c90();
  bVar1 = *(byte *)(in_ECX + 0x1a);
  if ((bVar1 & 4) == 0) {
    *(byte *)(in_ECX + 0x1a) = bVar1 | 4;
    if ((bVar1 & 1) != 0) {
      iVar2 = FUN_0068db10();
      if (iVar2 != 0) {
        uStack_30 = *(undefined4 *)(iVar2 + 8);
        uStack_34 = 0x6d321e;
        (**(code **)(*in_ECX + 0x30))();
      }
    }
    FUN_006e6400(auStack_38);
    FUN_006ce9f0(1);
  }
  ExceptionList = local_10;
  return;
}

