// rea decompile_all
// name: FUN_0043bdd0
// address: 0x43bdd0
// body: available
// range: 0x43bdd0-0x43c08d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0043bdd0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar7;
  undefined4 *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fe719;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  local_8 = 0;
  local_1c = 1;
  FUN_0045c990(&DAT_00c146fc,uVar2);
  puVar3 = (undefined4 *)FUN_0062a9c0(&local_20,"NumSampleLoops",&local_18);
  iVar4 = FID_conflict__atoi((char *)*puVar3);
  iVar7 = 0x40;
  if (iVar4 < 0x40) {
    iVar7 = iVar4;
  }
  piVar5 = local_20 + -2;
  local_14 = iVar7;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (0 < iVar7) {
    uVar2 = iVar7 * 0x18 + 0x24;
    if (in_ECX[1] != uVar2) {
      if (uVar2 == 0) {
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
        in_ECX[1] = 0;
      }
      else {
        if (*in_ECX == 0) {
          FID_conflict__free((void *)0x0);
          iVar7 = FUN_004c5556(uVar2,1);
          *in_ECX = iVar7;
        }
        else {
          iVar7 = FUN_004c553b(*in_ECX,uVar2);
          *in_ECX = iVar7;
          uVar1 = in_ECX[1];
          if (uVar1 < uVar2) {
            _memset((void *)(iVar7 + uVar1),0,uVar2 - uVar1);
          }
        }
        in_ECX[1] = uVar2;
      }
    }
    puVar3 = (undefined4 *)*in_ECX;
    local_20 = puVar3;
    uVar6 = FUN_004416d0(&DAT_00c146fc);
    *puVar3 = uVar6;
    uVar6 = FUN_004416d0(&DAT_00c146fc);
    puVar3[1] = uVar6;
    uVar6 = FUN_004416d0(&DAT_00c146fc);
    puVar3[2] = uVar6;
    uVar6 = FUN_004416d0(&DAT_00c146f8);
    puVar3[3] = uVar6;
    uVar6 = FUN_004416d0(&DAT_00c146fc);
    puVar3[4] = uVar6;
    uVar6 = FUN_004416d0(&DAT_00c146fc);
    puVar3[5] = uVar6;
    uVar6 = FUN_004416d0(&DAT_00c146fc);
    puVar3[6] = uVar6;
    puVar3[7] = local_14;
    uVar6 = FUN_004416d0(&DAT_00c146fc);
    puVar3[8] = uVar6;
    iVar7 = 0;
    if (0 < local_14) {
      puVar3 = local_20 + 0xb;
      uVar6 = extraout_ECX;
      do {
        uVar6 = FUN_0043bcf0("Identifier",uVar6);
        puVar3[-2] = uVar6;
        uVar6 = FUN_0043bcf0(&DAT_00c14884);
        puVar3[-1] = uVar6;
        uVar6 = FUN_0043bcf0("Start");
        *puVar3 = uVar6;
        uVar6 = FUN_0043bcf0(&DAT_00c147e0);
        puVar3[1] = uVar6;
        uVar6 = FUN_0043bcf0("Fraction");
        puVar3[2] = uVar6;
        uVar6 = FUN_0043bcf0("PlayCount");
        iVar7 = iVar7 + 1;
        puVar3[3] = uVar6;
        puVar3 = puVar3 + 6;
        uVar6 = extraout_ECX_00;
      } while (iVar7 < local_14);
      ExceptionList = local_10;
      return in_ECX;
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}

