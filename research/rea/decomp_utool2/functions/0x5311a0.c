// rea decompile_all
// name: FUN_005311a0
// address: 0x5311a0
// body: available
// range: 0x5311a0-0x5312e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005311a0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ce83;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0040ebf0(&local_18);
  local_8 = 0;
  uVar5 = 0;
  if (0 < (int)local_18[0xc]) {
    bVar6 = local_18[0xc] != 0;
    do {
      if ((bVar6) && (*(int *)(local_18[10] + uVar5 * 4) != 0)) {
        uVar7 = FUN_0040a090(&local_1c);
        uVar8 = 0;
        local_8._0_1_ = 1;
        FUN_006f6dd6(*(undefined4 *)((int)((ulonglong)uVar7 >> 0x20) + 4),0,
                     &juce::TreeView::RTTI_Type_Descriptor,&TargetExplorer::RTTI_Type_Descriptor,0,
                     uVar2);
        iVar3 = FUN_0052d970((int)uVar7,uVar8);
        local_8 = (uint)local_8._1_3_ << 8;
        piVar4 = (int *)(local_1c + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        if (iVar3 != 0) {
          if (*(int *)(local_14 + 0x58) == 0) {
            if ((*(uint *)(iVar3 + 0x40) & 0x2000) == 0) {
              if (*(int *)(iVar3 + 0x5c) != 0) {
                *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) + -1;
              }
              if (*(int *)(iVar3 + 0x5c) == 0) {
                uVar8 = 0;
                goto LAB_005312a9;
              }
            }
          }
          else if ((*(int *)(local_14 + 0x58) == 1) && ((*(uint *)(iVar3 + 0x40) & 0x2000) == 0)) {
            *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) + 1;
            uVar8 = 1;
LAB_005312a9:
            FUN_0052f780(uVar8,0,1);
          }
        }
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < (uint)local_18[0xc];
    } while ((int)uVar5 < (int)local_18[0xc]);
  }
  LOCK();
  piVar4 = local_18 + 1;
  iVar3 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    (**(code **)*local_18)(1);
  }
  ExceptionList = local_10;
  return;
}

