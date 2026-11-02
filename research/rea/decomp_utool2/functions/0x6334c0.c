// rea decompile_all
// name: FUN_006334c0
// address: 0x6334c0
// body: available
// range: 0x6334c0-0x63375d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006334c0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  double *in_ECX;
  int *piVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0071e8a7;
  local_10 = ExceptionList;
  if ((0.001 <= *in_ECX) || (*in_ECX <= -0.001)) {
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_00455850(&DAT_00bfe12c,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    piVar4 = param_2;
    if (*in_ECX <= 0.0 && *in_ECX != 0.0) {
      param_2 = (int *)CONCAT22(param_2._2_2_,0x2d);
      FUN_00621830(&param_2);
    }
    uVar5 = (int)(*in_ECX / 604800.0) >> 0x1f;
    uVar2 = (int)(*in_ECX / 604800.0) ^ uVar5;
    bVar7 = -1 < (int)(uVar2 - uVar5);
    if (uVar2 != uVar5 && bVar7) {
      FUN_0061dfc0("1 week","2 weeks");
    }
    bVar6 = uVar2 != uVar5 && bVar7;
    uVar2 = (int)(*in_ECX / 86400.0) >> 0x1f;
    if (0 < (int)(((int)(*in_ECX / 86400.0) ^ uVar2) - uVar2) % 7) {
      FUN_0061dfc0("1 day","2 days");
      bVar6 = bVar6 + 1;
    }
    if (bVar6 < 2) {
      uVar2 = (int)(*in_ECX / 3600.0) >> 0x1f;
      if (0 < (int)(((int)(*in_ECX / 3600.0) ^ uVar2) - uVar2) % 0x18) {
        FUN_0061dfc0(&DAT_00c012f8,"2 hrs");
        bVar6 = bVar6 + 1;
      }
      if (bVar6 < 2) {
        uVar2 = (int)(*in_ECX / 60.0) >> 0x1f;
        if (0 < (int)(((int)(*in_ECX / 60.0) ^ uVar2) - uVar2) % 0x3c) {
          FUN_0061dfc0("1 min","2 mins");
          bVar6 = bVar6 + 1;
        }
        if (bVar6 < 2) {
          uVar2 = (int)*in_ECX >> 0x1f;
          if (0 < (int)(((int)*in_ECX ^ uVar2) - uVar2) % 0x3c) {
            FUN_0061dfc0("1 sec","2 secs");
            bVar6 = bVar6 + 1;
          }
          if ((bVar6 == 0) &&
             (uVar2 = FUN_006f55df(),
             0 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) % 1000)) {
            uVar3 = FUN_00637250();
            local_8._0_1_ = 1;
            FUN_0045d120();
            param_2 = (int *)CONCAT22(param_2._2_2_,0x20);
            FUN_00621830(&param_2);
            FUN_00636ec0(uVar3);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00637c10();
          }
        }
      }
    }
    FUN_0062cce0(param_1);
    piVar4 = piVar4 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  else {
    iVar1 = *param_2;
    *param_1 = iVar1;
    piVar4 = (int *)(iVar1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      return param_1;
    }
  }
  ExceptionList = local_10;
  return param_1;
}

