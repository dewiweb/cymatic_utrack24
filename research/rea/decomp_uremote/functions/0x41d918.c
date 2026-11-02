// rea decompile_all
// name: FUN_0041d918
// address: 0x41d918
// body: available
// range: 0x41d918-0x41dade inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041d918(undefined4 param_1,short *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int local_98;
  undefined1 local_88 [24];
  int local_70;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  
  if ((param_2[1] == 0) || (*param_2 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0041ce24(local_88,param_2,param_1,param_3);
    if (iVar4 == 0) {
      uVar1 = *(undefined4 *)(local_70 + 0x194);
      iVar2 = *(int *)(local_70 + 200);
      bVar3 = false;
      uVar5 = thunk_FUN_00401000(*(undefined4 *)(param_3 + 0x1a0),uVar1);
      uVar8 = uVar5 + 0x20 & 0xffffffc0;
      if ((uVar8 != 0) && (uVar5 != uVar8)) {
        bVar3 = true;
        uVar6 = FUN_0040d230(uVar8);
        local_98 = iVar2;
        if ((int)uVar8 < (int)uVar5) {
          local_98 = iVar2 + iVar2 / -0x32;
        }
        FUN_0041c576(local_70,local_98,uVar6,0,0);
      }
      local_10 = 1;
      local_f = 1;
      if ((param_4 == 2) || (param_4 == 3)) {
        local_e = 1;
      }
      else {
        local_e = 0;
      }
      if ((param_4 == 2) || (param_4 == 4)) {
        local_d = 1;
      }
      else {
        local_d = 0;
      }
      local_c = param_4 != 1;
      iVar7 = 0;
      do {
        FUN_0041cd87(iVar7);
        FUN_0041d067();
        FUN_0041cba0(local_70,iVar7,local_88);
        FUN_0041d2ff();
        if (iVar7 == 1) {
          FUN_0041d416();
        }
        FUN_0041d520();
        FUN_0041d5b4();
        FUN_0041d785();
        FUN_0041cdc9(iVar7);
        if (bVar3) {
          FUN_0041c576(local_70,iVar2,uVar1,0,0);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 2);
    }
    FUN_0041cd06();
  }
  return iVar4;
}

