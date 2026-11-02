// rea decompile_all
// name: FUN_00492df5
// address: 0x492df5
// body: available
// range: 0x492df5-0x49318a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x492e09 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x492eea to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00492df5(int param_1)

{
  byte bVar1;
  int *in_EAX;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0xd8) == 0) ||
     (((*(uint *)(param_1 + 0x2c) & 0x4000) != 0 && ((*(uint *)(param_1 + 0x2c) & 0x40) == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if ((*(uint *)(param_1 + 0x30) & 0x1000) != 0) {
    if ((char)in_EAX[2] == '\x03') {
      FUN_0049511f(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x168),
                   *(undefined2 *)(param_1 + 0x104));
    }
    else {
      FUN_0049531f();
    }
  }
  if ((((*(uint *)(param_1 + 0x30) & 0x40000) != 0) && (-1 < (char)*(uint *)(param_1 + 0x30))) &&
     (((char)in_EAX[2] == '\x06' || ((char)in_EAX[2] == '\x04')))) {
    FUN_00499990();
  }
  if (((*(uint *)(param_1 + 0x30) & 0x600000) != 0) && (iVar2 = FUN_0049397c(param_1), iVar2 != 0))
  {
    *(undefined1 *)(param_1 + 0x214) = 1;
    if ((*(uint *)(param_1 + 0x30) & 0x600000) == 0x400000) {
      FUN_00491216();
    }
    if ((*(uint *)(param_1 + 0x30) & 0x600000) == 0x200000) goto LAB_00492ee8;
  }
  if (((*(uint *)(param_1 + 0x30) & 0x4000) != 0) && ((*(uint *)(param_1 + 0x28) & 0x800) == 0)) {
    FUN_00493846();
  }
  if ((*(byte *)(param_1 + 0x30) & 0x80) != 0) {
    FUN_00493d6f();
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  if (((((uVar3 & 0x2000) != 0) && ((uVar3 & 0x600000) == 0)) &&
      ((-1 < (char)uVar3 ||
       ((*(short *)(param_1 + 0x104) == 0 && ((*(byte *)(param_1 + 0x10b) & 4) == 0)))))) &&
     (*(char *)(param_1 + 0x10b) != '\x03')) {
    FUN_00494cfb();
  }
  if ((((*(uint *)(param_1 + 0x30) & 0x40000) != 0) && ((char)*(uint *)(param_1 + 0x30) < '\0')) &&
     (((char)in_EAX[2] == '\x06' || ((char)in_EAX[2] == '\x04')))) {
    FUN_00499990();
  }
  if (((*(uint *)(param_1 + 0x30) & 0x800000) != 0) && ((*(byte *)(in_EAX + 2) & 4) != 0)) {
    FUN_00495060();
  }
  if ((*(uint *)(param_1 + 0x30) & 0x4000000) != 0) {
    FUN_00493400();
  }
  if ((*(uint *)(param_1 + 0x30) & 0x400) != 0) {
    FUN_00493451();
  }
  if (((*(byte *)(param_1 + 0x30) & 0x40) == 0) ||
     (FUN_004956fa(*(undefined4 *)(param_1 + 0x1bc)), in_EAX[1] != 0)) {
    if ((*(uint *)(param_1 + 0x30) & 0x200) != 0) {
      FUN_004956c5();
    }
    if (((*(uint *)(param_1 + 0x30) & 0x4000) != 0) && ((*(uint *)(param_1 + 0x28) & 0x800) != 0)) {
      FUN_00493846();
    }
    if ((*(byte *)(param_1 + 0x30) & 0x20) != 0) {
      FUN_004998c7();
    }
    if ((*(byte *)(param_1 + 0x30) & 8) != 0) {
      FUN_00493297();
    }
    if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
      FUN_0049318b();
    }
    if (((char)in_EAX[2] == '\x03') && (-1 < *(int *)(param_1 + 0x100))) {
      FUN_00499b5b();
    }
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      FUN_00499aab();
    }
    if ((*(uint *)(param_1 + 0x30) & 0x10000) != 0) {
      FUN_00499949(*(int *)(param_1 + 0xd8) + 1);
    }
    if ((*(uint *)(param_1 + 0x30) & 0x8000) != 0) {
      FUN_00493615(*(int *)(param_1 + 0xd8) + 1,*(undefined2 *)(param_1 + 0x114),
                   *(undefined4 *)(param_1 + 0x2c));
    }
    if ((*(uint *)(param_1 + 0x30) & 0x80000) != 0) {
      FUN_00493578();
    }
    if ((*(uint *)(param_1 + 0x30) & 0x20000) != 0) {
      FUN_0049348a();
    }
    if ((*(byte *)(param_1 + 0x30) & 0x10) != 0) {
      FUN_00499924();
    }
    if ((*(uint *)(param_1 + 0x30) & 0x100000) != 0) {
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        (**(code **)(param_1 + 0x18))(param_1);
      }
      if (*(char *)(param_1 + 0x24) != '\0') {
        *(char *)((int)in_EAX + 9) = *(char *)(param_1 + 0x24);
      }
      if (*(char *)(param_1 + 0x25) != '\0') {
        *(char *)((int)in_EAX + 10) = *(char *)(param_1 + 0x25);
      }
      bVar1 = *(char *)((int)in_EAX + 10) * *(char *)((int)in_EAX + 9);
      *(byte *)((int)in_EAX + 0xb) = bVar1;
      if (bVar1 < 8) {
        uVar3 = (uint)bVar1 * *in_EAX + 7 >> 3;
      }
      else {
        uVar3 = (uint)(bVar1 >> 3) * *in_EAX;
      }
      in_EAX[1] = uVar3;
    }
    return;
  }
LAB_00492ee8:
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

