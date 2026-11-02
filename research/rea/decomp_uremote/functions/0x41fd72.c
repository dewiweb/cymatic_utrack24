// rea decompile_all
// name: FUN_0041fd72
// address: 0x41fd72
// body: available
// range: 0x41fd72-0x41fe93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041fd72(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  ushort local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  local_8 = *(undefined4 *)(param_2 + 0x1c);
  local_c = FUN_004d021d();
  local_18 = FUN_0041148f();
  iVar2 = param_2;
  if (param_2 == 0) {
    iVar2 = FUN_00411560(iVar1,&local_18);
    if (iVar2 == 0) {
      param_2 = FUN_0041fc3e(&local_18);
      iVar2 = param_2;
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x94) = local_18;
        *(ushort *)(param_1 + 0x98) = local_14;
        uVar3 = FUN_00411976(0x10,0,&param_2);
        *(undefined4 *)(param_1 + 0x9c) = uVar3;
        iVar2 = param_2;
        if (param_2 == 0) {
          iVar2 = FUN_0041106d();
          if (iVar2 == 0) {
            iVar2 = FUN_004111b5();
            if (iVar2 == 0) {
              puVar5 = *(undefined4 **)(param_1 + 0x9c);
              param_2 = 0;
              if (local_14 != 0) {
                do {
                  uVar3 = FUN_004112c7();
                  *puVar5 = uVar3;
                  uVar3 = FUN_004112c7();
                  puVar5[1] = uVar3;
                  uVar3 = FUN_004112c7();
                  puVar5[2] = uVar3;
                  iVar4 = FUN_004112c7();
                  puVar5[3] = iVar4;
                  if ((uint)(puVar5[2] + iVar4) <= *(uint *)(iVar1 + 4)) {
                    puVar5 = puVar5 + 4;
                  }
                  param_2 = param_2 + 1;
                } while (param_2 < (int)(uint)local_14);
              }
              FUN_00411249();
            }
          }
        }
      }
    }
  }
  return iVar2;
}

