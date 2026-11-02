// rea decompile_all
// name: FUN_00415c3c
// address: 0x415c3c
// body: available
// range: 0x415c3c-0x415e05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00415c3c(int param_1,int *param_2,uint param_3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  if ((iVar5 == 0) || (*(uint *)(iVar5 + 0x10) <= param_3)) {
    iVar2 = 6;
  }
  else {
    if (param_3 != 0) {
      param_3 = param_3 - 1;
    }
    psVar1 = (short *)(param_3 * 0x10 + *(int *)(iVar5 + 0x124));
    *(int *)(param_1 + 0x4c) = (int)psVar1[4] + (int)psVar1[3];
    *(int *)(param_1 + 0x50) = (int)psVar1[1] - (int)*psVar1;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(undefined2 *)(param_1 + 0x5c) = 1;
    iVar2 = 1 << ((byte)*(undefined4 *)(iVar5 + 0x134) & 3);
    if (iVar2 == 1) {
      uVar3 = *(int *)(param_1 + 0x50) + 7 >> 3;
    }
    else if (iVar2 == 2) {
      uVar3 = *(int *)(param_1 + 0x50) + 0xf >> 3 & 0xfffffffe;
    }
    else if (iVar2 == 4) {
      uVar3 = *(int *)(param_1 + 0x50) + 0x1f >> 3 & 0xfffffffc;
    }
    else {
      if (iVar2 != 8) {
        return 3;
      }
      uVar3 = *(int *)(param_1 + 0x50) + 0x3f >> 3 & 0xfffffff8;
    }
    *(uint *)(param_1 + 0x54) = uVar3;
    iVar4 = *(int *)(param_1 + 0x4c) * *(int *)(param_1 + 0x54);
    iVar2 = FUN_0040db55(iVar4);
    if (((iVar2 == 0) && (iVar2 = FUN_0041106d(), iVar2 == 0)) &&
       (iVar2 = FUN_004110b4(*(undefined4 *)(param_1 + 0x58),iVar4), iVar2 == 0)) {
      if ((*(byte *)(iVar5 + 0x134) & 8) == 0) {
        thunk_FUN_00414893(iVar4);
      }
      uVar3 = *(uint *)(iVar5 + 0x134);
      if (((uVar3 >> 1 ^ uVar3) & 4) != 0) {
        iVar5 = 1 << ((byte)(uVar3 >> 4) & 3);
        if (iVar5 == 2) {
          FUN_0041489b();
        }
        else if (iVar5 == 4) {
          FUN_004148b6();
        }
      }
      *(undefined4 *)(param_1 + 0x48) = 0x62697473;
      *(int *)(param_1 + 100) = (int)*psVar1;
      *(int *)(param_1 + 0x68) = (int)psVar1[3];
      *(int *)(param_1 + 0x28) = (int)psVar1[2] << 6;
      *(int *)(param_1 + 0x20) = (int)*psVar1 << 6;
      *(int *)(param_1 + 0x24) = (int)psVar1[3] << 6;
      *(int *)(param_1 + 0x18) = ((int)psVar1[1] - (int)*psVar1) * 0x40;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x4c) << 6;
      FUN_0040f2e7();
    }
  }
  return iVar2;
}

