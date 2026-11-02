// rea decompile_all
// name: FUN_004968c0
// address: 0x4968c0
// body: available
// range: 0x4968c0-0x496a8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004968c0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  void *local_30 [2];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  undefined2 local_14 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00702638;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(int *)(in_ECX + 0x88) != 0) && (*(int *)(in_ECX + 0x74) != 0)) &&
     (**(char **)(in_ECX + 0x8c) == '\0')) {
    local_18 = "";
    local_8 = 0;
    local_24 = in_ECX;
    FUN_00689110(local_30,*(int *)(in_ECX + 0x74));
    local_8._0_1_ = 1;
    iVar7 = local_28;
    if (0 < local_28) {
      do {
        FUN_006c8e10(&local_1c);
        local_8 = CONCAT31(local_8._1_3_,2);
        if (*local_18 != '\0') {
          FUN_00621830(&DAT_00c177b0);
        }
        iVar3 = FUN_0044ec90(uVar2);
        if (iVar3 == 1) {
          local_20 = local_1c;
          FUN_0044ebd0(0);
          uVar4 = FUN_00426f70();
          if (0x7f < uVar4) goto LAB_004969cd;
          FUN_00621830("shortcut: \'");
          FUN_00636ec0(&local_1c);
          local_14[0] = 0x27;
          FUN_00621830(local_14);
        }
        else {
LAB_004969cd:
          FUN_00636ec0(&local_1c);
        }
        local_8._0_1_ = 1;
        piVar6 = (int *)(local_1c + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        iVar7 = iVar7 + -1;
        in_ECX = local_24;
      } while (iVar7 != 0);
    }
    puVar5 = (undefined4 *)FUN_006378b0(&local_24);
    uVar1 = *(undefined4 *)(in_ECX + 0x8c);
    *(undefined4 *)(in_ECX + 0x8c) = *puVar5;
    *puVar5 = uVar1;
    piVar6 = (int *)(local_24 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    FID_conflict__free(local_30[0]);
    piVar6 = (int *)(local_18 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

