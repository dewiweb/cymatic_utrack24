// rea decompile_all
// name: FUN_0041fc3e
// address: 0x41fc3e
// body: available
// range: 0x41fc3e-0x41fd71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041fc3e(int param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  int in_EAX;
  int iVar6;
  int local_2c;
  int local_24;
  uint local_20;
  
  sVar1 = 0;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  iVar6 = FUN_0041106d();
  if (iVar6 == 0) {
    for (uVar5 = 0; uVar5 < *(ushort *)(param_1 + 4); uVar5 = uVar5 + 1) {
      iVar6 = FUN_00411560();
      if (iVar6 != 0) {
        *(ushort *)(param_1 + 4) = uVar5 - 1;
        break;
      }
      if (local_20 + local_24 <= *(uint *)(in_EAX + 4)) {
        sVar1 = sVar1 + 1;
        if ((local_2c == 0x68656164) || (local_2c == 0x62686564)) {
          bVar2 = true;
          if (local_20 < 0x36) goto LAB_0041fd55;
          iVar6 = FUN_0041106d();
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = FUN_0041148f();
          if (iVar6 != 0x5f0f3cf5) goto LAB_0041fd55;
          iVar6 = FUN_0041106d();
          if (iVar6 != 0) {
            return iVar6;
          }
        }
        else if (local_2c == 0x53494e47) {
          bVar3 = true;
        }
        else if (local_2c == 0x4d455441) {
          bVar4 = true;
        }
      }
    }
    *(short *)(param_1 + 4) = sVar1;
    if (sVar1 == 0) {
      iVar6 = 2;
    }
    else if ((bVar2) || ((bVar3 && (bVar4)))) {
      iVar6 = 0;
    }
    else {
LAB_0041fd55:
      iVar6 = 0x8e;
    }
  }
  return iVar6;
}

