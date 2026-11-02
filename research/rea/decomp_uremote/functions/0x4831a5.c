// rea decompile_all
// name: FUN_004831a5
// address: 0x4831a5
// body: available
// range: 0x4831a5-0x48324c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004831a5(uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(in_EAX + 0x1c);
  if (param_2 == 0) {
    *(undefined4 *)(**(int **)(in_EAX + 0x20) + 0x14) = 0x28;
    (**(code **)**(undefined4 **)(in_EAX + 0x20))(*(undefined4 **)(in_EAX + 0x20));
  }
  if (*(char *)(in_EAX + 0xc) == '\0') {
    uVar3 = iVar2 + param_2;
    uVar4 = ((1 << ((byte)param_2 & 0x1f)) - 1U & param_1) << (0x18U - (char)uVar3 & 0x1f) |
            *(uint *)(in_EAX + 0x18);
    if (7 < (int)uVar3) {
      param_2 = uVar3 >> 3;
      uVar3 = uVar3 + param_2 * -8;
      do {
        **(undefined1 **)(in_EAX + 0x10) = (char)(uVar4 >> 0x10);
        *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
        piVar1 = (int *)(in_EAX + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00483173();
        }
        if (((int)uVar4 >> 0x10 & 0xffU) == 0xff) {
          **(undefined1 **)(in_EAX + 0x10) = 0;
          *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
          piVar1 = (int *)(in_EAX + 0x14);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_00483173();
          }
        }
        uVar4 = uVar4 << 8;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    *(uint *)(in_EAX + 0x18) = uVar4;
    *(uint *)(in_EAX + 0x1c) = uVar3;
  }
  return;
}

