// rea decompile_all
// name: FUN_0062b730
// address: 0x62b730
// body: available
// range: 0x62b730-0x62b883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062b730(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  void *local_34 [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071df0e;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FID_conflict__free((void *)*in_ECX);
  *in_ECX = 0;
  in_ECX[5] = 4;
  in_ECX[6] = 0xffffffff;
  *(undefined1 *)(in_ECX + 7) = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  FUN_0045c2c0(param_1,uVar1);
  iVar2 = FUN_00426f70();
  *(bool *)(in_ECX + 7) = iVar2 == 0x2d;
  if (param_2 == 2) {
    iVar2 = 1;
  }
  else {
    if (param_2 != 8) goto LAB_0062b866;
    iVar2 = 3;
  }
  do {
    while( true ) {
      iVar3 = FUN_00443260();
      uVar1 = iVar3 - 0x30;
      if (9 < uVar1) {
        if (iVar3 - 0x61U < 6) {
          uVar1 = iVar3 - 0x57;
        }
        else if (iVar3 - 0x41U < 6) {
          uVar1 = iVar3 - 0x37;
        }
        else {
          uVar1 = 0xffffffff;
        }
      }
      if (param_2 <= uVar1) break;
      if (-1 < (int)in_ECX[6]) {
        if (iVar2 < 0) {
          FUN_00625540(-iVar2,extraout_ECX);
        }
        else if (iVar2 != 0) {
          FUN_006256b0(iVar2,extraout_ECX);
        }
      }
      FUN_006265b0(uVar1);
      local_8 = 0;
      FUN_006261c0(local_34);
      local_8 = 0xffffffff;
      FID_conflict__free(local_34[0]);
    }
  } while (iVar3 != 0);
LAB_0062b866:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

