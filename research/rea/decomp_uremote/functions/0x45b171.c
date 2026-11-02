// rea decompile_all
// name: FUN_0045b171
// address: 0x45b171
// body: available
// range: 0x45b171-0x45b20e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045b171(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint in_ECX;
  int iVar5;
  
  iVar5 = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  if (param_2 == 0x80) {
    if (0 < *(int *)(in_ECX + 0x48)) {
      do {
        puVar3 = (undefined4 *)FUN_0045b3d0();
        cVar1 = (**(code **)*puVar3)();
        if (cVar1 == '\0') {
          iVar4 = FUN_0045b3d0();
          (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 8) + 4 + iVar4) + 4))();
          FUN_0045b451();
          *(undefined1 *)(in_ECX + 0x54) = 1;
        }
        else {
          iVar5 = iVar5 + 1;
        }
      } while (iVar5 < *(int *)(in_ECX + 0x48));
    }
    FUN_0047433f();
  }
  else if (param_2 == 0x81) {
    FUN_0045b20f(param_3);
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x104))
                      (param_4,-(uint)(in_ECX != 0x10) & in_ECX,0);
    *(undefined4 *)(in_ECX + 0x50) = uVar2;
  }
  return;
}

