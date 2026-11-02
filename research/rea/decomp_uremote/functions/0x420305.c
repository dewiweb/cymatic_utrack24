// rea decompile_all
// name: FUN_00420305
// address: 0x420305
// body: available
// range: 0x420305-0x4203f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00420305(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  param_2 = (**(code **)(param_1 + 0x1fc))(param_1,0x67617370,param_2,0);
  if ((param_2 == 0) && (param_2 = FUN_004111b5(), param_2 == 0)) {
    uVar1 = FUN_00411277();
    *(ushort *)(param_1 + 0x224) = uVar1;
    uVar2 = FUN_00411277();
    *(undefined2 *)(param_1 + 0x226) = uVar2;
    FUN_00411249();
    if (*(ushort *)(param_1 + 0x224) < 2) {
      uVar1 = *(ushort *)(param_1 + 0x226);
      iVar3 = FUN_00411976(4,0,&param_2);
      if (param_2 == 0) {
        param_2 = FUN_004111b5();
        uVar4 = 0;
        if (param_2 == 0) {
          *(int *)(param_1 + 0x228) = iVar3;
          if (uVar1 != 0) {
            do {
              uVar2 = FUN_00411277();
              *(undefined2 *)(iVar3 + uVar4 * 4) = uVar2;
              uVar2 = FUN_00411277();
              *(undefined2 *)(iVar3 + 2 + uVar4 * 4) = uVar2;
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar1);
          }
          FUN_00411249();
        }
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x226) = 0;
      param_2 = 8;
    }
  }
  return param_2;
}

