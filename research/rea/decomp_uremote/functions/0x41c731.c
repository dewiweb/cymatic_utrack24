// rea decompile_all
// name: FUN_0041c731
// address: 0x41c731
// body: available
// range: 0x41c731-0x41c821 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041c731(uint *param_1,int *param_2)

{
  uint *in_EAX;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int local_8;
  
  uVar4 = *param_1;
  uVar1 = FUN_00411976(4,0,&local_8);
  in_EAX[3] = uVar1;
  if (local_8 == 0) {
    uVar1 = FUN_00411976(0x1c,0,&local_8);
    in_EAX[2] = uVar1;
    if (local_8 == 0) {
      uVar1 = FUN_00411976(0x10,0,&local_8);
      in_EAX[6] = uVar1;
      if (local_8 == 0) {
        in_EAX[4] = in_EAX[3] + uVar4 * 4;
        puVar2 = (undefined4 *)in_EAX[2];
        *in_EAX = uVar4;
        in_EAX[1] = 0;
        in_EAX[5] = 0;
        in_EAX[7] = 0;
        puVar3 = (undefined4 *)param_1[2];
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          puVar2[4] = puVar3[2];
          puVar2 = puVar2 + 7;
          puVar3 = puVar3 + 3;
        }
        if (param_2 != (int *)0x0) {
          iVar5 = *param_2;
          in_EAX[8] = (uint)param_2;
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            FUN_0041c6dd();
          }
        }
        uVar4 = *in_EAX;
        if ((in_EAX[1] != uVar4) && (uVar1 = 0, uVar4 != 0)) {
          do {
            FUN_0041c67c();
            uVar1 = uVar1 + 1;
          } while (uVar1 < uVar4);
        }
      }
    }
  }
  return local_8;
}

