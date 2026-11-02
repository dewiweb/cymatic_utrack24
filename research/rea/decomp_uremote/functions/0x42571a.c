// rea decompile_all
// name: FUN_0042571a
// address: 0x42571a
// body: available
// range: 0x42571a-0x4259a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042571a(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6,int param_7,int param_8,byte *param_9,int param_10)

{
  char cVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  short sVar6;
  uint *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10 [12];
  
  local_14 = *(undefined4 *)(param_8 + 0x1c);
  puVar7 = (uint *)(param_5 + 0x4c);
  iVar5 = FUN_0041106d();
  if (iVar5 != 0) {
    return iVar5;
  }
  local_20 = FUN_00425403(param_8,param_2,param_9);
  if (local_20 != 0) {
    return local_20;
  }
  iVar5 = 0;
  if (param_10 == 0) {
    *(uint *)(param_5 + 0x50) = (uint)param_9[1];
    *puVar7 = (uint)*param_9;
    cVar1 = *(char *)(param_1 + 0x2e);
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_5 + 0x5e) = 1;
      iVar5 = *(int *)(param_5 + 0x50) + 7 >> 3;
    }
    else if (cVar1 == '\x02') {
      *(undefined1 *)(param_5 + 0x5e) = 3;
      iVar5 = *(int *)(param_5 + 0x50) + 3 >> 2;
    }
    else if (cVar1 == '\x04') {
      *(undefined1 *)(param_5 + 0x5e) = 4;
      iVar5 = *(int *)(param_5 + 0x50) + 1 >> 1;
    }
    else {
      if (cVar1 != '\b') {
        return 3;
      }
      iVar5 = *(int *)(param_5 + 0x50);
      *(undefined1 *)(param_5 + 0x5e) = 2;
    }
    *(int *)(param_5 + 0x54) = iVar5;
    if (iVar5 * *puVar7 == 0) {
      return 0;
    }
    iVar5 = FUN_0040db55(iVar5 * *puVar7);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  local_20 = iVar5;
  uVar2 = *(ushort *)(param_2 + 6);
  if (uVar2 == 0) {
    return 3;
  }
  if (2 < uVar2) {
    if (uVar2 < 5) {
      return 3;
    }
    if (7 < uVar2) {
      if (uVar2 == 8) {
        local_20 = FUN_00411095(1);
        if (local_20 != 0) {
          return 0x53;
        }
      }
      else if (uVar2 != 9) {
        return 3;
      }
      local_1c = FUN_00411377();
      local_1c = local_1c & 0xffff;
      if (local_20 != 0) {
        return local_20;
      }
      local_18 = FUN_00411976(4,0,&local_20);
      if (local_20 != 0) {
        return local_20;
      }
      sVar6 = (short)local_1c;
      iVar5 = FUN_004111b5();
      if (iVar5 == 0) {
        if ((short)local_1c != 0) {
          puVar8 = (undefined1 *)(local_18 + 3);
          do {
            uVar4 = FUN_00411277();
            *(undefined2 *)(puVar8 + -3) = uVar4;
            uVar3 = FUN_00411266();
            puVar8[-1] = uVar3;
            uVar3 = FUN_00411266();
            *puVar8 = uVar3;
            sVar6 = sVar6 + -1;
            puVar8 = puVar8 + 4;
          } while (sVar6 != 0);
        }
        FUN_00411249();
        if ((short)local_1c != 0) {
          pcVar9 = (char *)(local_18 + 2);
          sVar6 = (short)local_1c;
          do {
            iVar5 = FUN_004252cc(*(undefined2 *)(pcVar9 + -2),&local_20,&local_1c);
            if ((iVar5 != 0) ||
               (iVar5 = FUN_0042571a(param_1,local_20,param_3,local_1c,param_5,*pcVar9 + param_6,
                                     pcVar9[1] + param_7,param_8,local_10,param_10 + 1), iVar5 != 0)
               ) break;
            sVar6 = sVar6 + -1;
            pcVar9 = pcVar9 + 4;
          } while (sVar6 != 0);
        }
      }
      FUN_00411a5c(local_18);
      return iVar5;
    }
  }
  iVar5 = FUN_0042563f(puVar7,param_6,param_7,*(undefined1 *)(param_1 + 0x2e),uVar2);
  return iVar5;
}

