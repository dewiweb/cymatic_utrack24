// rea decompile_all
// name: FUN_0060dec0
// address: 0x60dec0
// body: available
// range: 0x60dec0-0x60e0b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060dec0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined **local_3c;
  int local_38;
  int *local_34;
  void *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  LPCRITICAL_SECTION local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c623;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (LPCRITICAL_SECTION)(in_ECX + 0x24);
  EnterCriticalSection(local_14);
  local_8 = 0;
  iVar5 = in_ECX[0x23] + -1;
  if (-1 < iVar5) {
    do {
      piVar2 = *(int **)(in_ECX[0x21] + iVar5 * 4);
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        if (piVar2 != (int *)0x0) goto LAB_0060dfe0;
        break;
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  piVar2 = operator_new(0x18);
  *piVar2 = param_2;
  piVar2[1] = param_3;
  local_18 = piVar2;
  DVar3 = timeGetTime();
  uVar6 = DAT_00c8a644;
  if ((DAT_00c8a644 <= DVar3) || (uVar6 = DAT_00c8a644 - 1000, DVar3 < uVar6)) {
    DAT_00c8a644 = DVar3;
  }
  piVar2[2] = DVar3;
  piVar2[3] = 0;
  piVar2[4] = 0;
  if (in_ECX[0x23] < in_ECX[0x2a]) {
    iVar5 = in_ECX[0x23] + 1;
    if (in_ECX[0x22] < iVar5) {
      FUN_00409cf0(iVar5 / 2 + in_ECX[0x23] + 9 & 0xfffffff8);
    }
    iVar5 = in_ECX[0x23];
    in_ECX[0x23] = iVar5 + 1;
    *(int **)(in_ECX[0x21] + iVar5 * 4) = piVar2;
  }
  else {
    piVar7 = piVar2;
    uVar4 = FUN_0060e1d0(piVar2,uVar6,uVar1);
    FUN_0044da10(uVar4,piVar7,uVar6);
  }
LAB_0060dfe0:
  local_3c = juce::OutputStream::vftable;
  FUN_0045c990(&DAT_00c129a8);
  local_3c = juce::MemoryOutputStream::vftable;
  local_30 = (void *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_8._0_1_ = 1;
  local_34 = piVar2 + 3;
  (**(code **)(*param_1 + 0x14))(&local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  local_3c = juce::MemoryOutputStream::vftable;
  FUN_00622b80();
  FID_conflict__free(local_30);
  piVar2 = (int *)(local_38 + -8);
  local_3c = juce::OutputStream::vftable;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  (**(code **)(*in_ECX + 4))(param_1,param_2,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
  ExceptionList = local_10;
  return;
}

