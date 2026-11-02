// rea decompile_all
// name: FUN_006c8e30
// address: 0x6c8e30
// body: available
// range: 0x6c8e30-0x6c91b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006c8e30(undefined4 *param_1)

{
  int iVar1;
  wint_t wVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  char *pcVar7;
  uint local_20 [2];
  undefined1 *local_18;
  char local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007260f9;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = &DAT_00bfe12c;
  local_8 = 0;
  if (0 < *in_ECX) {
    if ((in_ECX[2] == 0x2f) && (*in_ECX != 0x1006f)) {
      FUN_0045c990(&DAT_00c050a4);
      piVar4 = (int *)(local_18 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      ExceptionList = local_10;
      return param_1;
    }
    if (((uint)in_ECX[1] >> 1 & 1) != 0) {
      FUN_00621830("ctrl + ");
    }
    if ((*(byte *)(in_ECX + 1) & 1) != 0) {
      FUN_00621830("shift + ");
    }
    if (((uint)in_ECX[1] >> 2 & 1) != 0) {
      FUN_00621830("alt + ");
    }
    iVar1 = *in_ECX;
    iVar5 = 0;
    do {
      if (iVar1 == (&DAT_00c7efa4)[iVar5 * 2]) {
        piVar4 = (int *)(local_18 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
        }
        FUN_006377c0(local_18);
        piVar4 = (int *)(local_18 + -8);
        if (piVar4 == &DAT_00bfe124) {
          ExceptionList = local_10;
          return param_1;
        }
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 != 0) {
          ExceptionList = local_10;
          return param_1;
        }
        FID_conflict__free(piVar4);
        ExceptionList = local_10;
        return param_1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x13);
    if ((iVar1 < 0x10070) || (0x1007f < iVar1)) {
      if ((iVar1 < 0x10060) || (0x10069 < iVar1)) {
        if ((iVar1 < 0x21) || (0xaf < iVar1)) {
          if (iVar1 == 0x1006b) {
            FUN_00621830("numpad ");
            local_14[0] = '+';
            local_14[1] = '\0';
            pcVar7 = local_14;
          }
          else if (iVar1 == 0x1006d) {
            FUN_00621830("numpad ");
            local_14[0] = '-';
            local_14[1] = '\0';
            pcVar7 = local_14;
          }
          else if (iVar1 == 0x1006a) {
            FUN_00621830("numpad ");
            local_14[0] = '*';
            local_14[1] = '\0';
            pcVar7 = local_14;
          }
          else if (iVar1 == 0x1006f) {
            FUN_00621830("numpad ");
            local_14[0] = '/';
            local_14[1] = '\0';
            pcVar7 = local_14;
          }
          else if (iVar1 == 0x1006c) {
            FUN_00621830("numpad ");
            pcVar7 = "separator";
          }
          else if (iVar1 == 0x1006e) {
            FUN_00621830("numpad ");
            local_14[0] = '.';
            local_14[1] = '\0';
            pcVar7 = local_14;
          }
          else {
            if (iVar1 != 0x1002e) {
              uVar6 = FUN_00631190(uVar3);
              local_8 = CONCAT31(local_8._1_3_,1);
              local_14[0] = '#';
              local_14[1] = '\0';
              FUN_00621830(local_14);
              FUN_00636ec0(uVar6);
              FUN_00637c10();
              goto LAB_006c90b1;
            }
            FUN_00621830("numpad ");
            pcVar7 = "delete";
          }
          FUN_00621830(pcVar7);
        }
        else {
          wVar2 = _towupper((wint_t)iVar1);
          local_20[0] = (uint)wVar2;
          local_20[1] = 0;
          FUN_0045dfc0(local_20,0xffffffff);
        }
      }
      else {
        FUN_00621830("numpad ");
        FUN_0045d120();
      }
    }
    else {
      local_14[0] = 'F';
      local_14[1] = '\0';
      FUN_00621830(local_14);
      FUN_0045d120();
    }
  }
LAB_006c90b1:
  *param_1 = local_18;
  ExceptionList = local_10;
  return param_1;
}

