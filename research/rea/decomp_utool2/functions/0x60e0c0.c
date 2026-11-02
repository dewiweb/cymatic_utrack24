// rea decompile_all
// name: FUN_0060e0c0
// address: 0x60e0c0
// body: available
// range: 0x60e0c0-0x60e1c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0060e0c0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  DWORD DVar4;
  int *in_ECX;
  int iVar5;
  undefined **local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  LPCRITICAL_SECTION local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c64e;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (LPCRITICAL_SECTION)(in_ECX + 0x24);
  EnterCriticalSection(local_14);
  local_8 = 0;
  iVar5 = in_ECX[0x23] + -1;
  if (-1 < iVar5) {
    do {
      piVar1 = *(int **)(in_ECX[0x21] + iVar5 * 4);
      if ((*piVar1 == param_2) && (piVar1[1] == param_3)) {
        if (piVar1 != (int *)0x0) {
          DVar4 = timeGetTime();
          if ((DAT_00c8a644 <= DVar4) || (DVar4 < DAT_00c8a644 - 1000)) {
            DAT_00c8a644 = DVar4;
          }
          piVar1[2] = DVar4;
          local_24 = piVar1[3];
          local_20 = piVar1[4];
          local_28 = juce::MemoryInputStream::vftable;
          local_1c = 0;
          local_18 = (void *)0x0;
          local_8 = CONCAT31(local_8._1_3_,1);
          (**(code **)(*param_1 + 0x10))(&local_28,uVar3);
          local_28 = juce::MemoryInputStream::vftable;
          FID_conflict__free(local_18);
          uVar2 = 1;
          goto LAB_0060e139;
        }
        break;
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  uVar2 = (**(code **)(*in_ECX + 8))(param_1,param_2,param_3);
LAB_0060e139:
  LeaveCriticalSection(local_14);
  ExceptionList = local_10;
  return uVar2;
}

