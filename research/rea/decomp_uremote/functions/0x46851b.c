// rea decompile_all
// name: FUN_0046851b
// address: 0x46851b
// body: available
// range: 0x46851b-0x4686d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046851b(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int in_EAX;
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 1;
  if (in_EAX != 0) {
    *(undefined4 *)(in_EAX + 0x18) = 0;
    if (*(int *)(in_EAX + 0x20) == 0) {
      *(code **)(in_EAX + 0x20) = FUN_0046cece;
      *(undefined4 *)(in_EAX + 0x28) = 0;
    }
    if (*(int *)(in_EAX + 0x24) == 0) {
      *(code **)(in_EAX + 0x24) = FUN_00412f2b;
    }
    if (param_1 == 0xffffffff) {
      param_1 = 6;
    }
    if (param_3 < 0) {
      iVar4 = 0;
      param_3 = -param_3;
    }
    else if (0xf < param_3) {
      param_3 = param_3 + -0x10;
      iVar4 = 2;
    }
    if ((((param_4 - 1U < 9) && (param_2 == 8)) && (param_3 - 8U < 8)) &&
       ((param_1 < 10 && (param_5 < 5)))) {
      if (param_3 == 8) {
        param_3 = 9;
      }
      piVar1 = (int *)(**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),1,0x16c0);
      if (piVar1 != (int *)0x0) {
        *(int **)(in_EAX + 0x1c) = piVar1;
        piVar1[7] = 0;
        piVar1[6] = iVar4;
        piVar1[0xc] = param_3;
        iVar5 = 1 << ((byte)param_3 & 0x1f);
        piVar1[0xd] = iVar5 + -1;
        iVar4 = 1 << ((byte)(param_4 + 7) & 0x1f);
        piVar1[0x14] = param_4 + 7;
        *piVar1 = in_EAX;
        piVar1[0x13] = iVar4;
        piVar1[0x15] = iVar4 + -1;
        piVar1[0xb] = iVar5;
        piVar1[0x16] = (param_4 + 9U) / 3;
        iVar4 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),iVar5,2);
        piVar1[0xe] = iVar4;
        iVar4 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),piVar1[0xb],2);
        piVar1[0x10] = iVar4;
        iVar4 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),piVar1[0x13],2);
        piVar1[0x11] = iVar4;
        uVar2 = 1 << ((char)param_4 + 6U & 0x1f);
        piVar1[0x5a7] = uVar2;
        iVar4 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),uVar2,4);
        uVar2 = piVar1[0x5a7];
        piVar1[3] = uVar2 << 2;
        piVar1[2] = iVar4;
        if (((piVar1[0xe] != 0) && (piVar1[0x10] != 0)) && ((piVar1[0x11] != 0 && (iVar4 != 0)))) {
          piVar1[0x21] = param_1;
          piVar1[0x5a9] = iVar4 + (uVar2 & 0xfffffffe);
          piVar1[0x5a6] = uVar2 * 3 + iVar4;
          piVar1[0x22] = param_5;
          *(undefined1 *)(piVar1 + 9) = 8;
          uVar3 = FUN_004686da();
          return uVar3;
        }
        piVar1[1] = 0x29a;
        *(char **)(in_EAX + 0x18) = "insufficient memory";
        FUN_00468f2f();
      }
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}

