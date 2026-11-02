// rea decompile_all
// name: FUN_00407118
// address: 0x407118
// body: available
// range: 0x407118-0x407342 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00407118(undefined4 param_1,uint param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 local_10;
  uint *local_c;
  int local_8;
  
  local_10 = 0;
  local_8 = 0;
  puVar2 = (uint *)FUN_00411912(0x2203c,&local_8);
  local_c = puVar2;
  if (local_8 != 0) goto LAB_00407322;
  if (param_3 == (undefined4 *)0x0) {
    param_3 = &DAT_008f9df0;
  }
  puVar2[9] = (uint)param_3;
  puVar2[0x880e] = param_2;
  *(undefined2 *)(puVar2 + 3) = 0x7fff;
  FUN_00405526(param_2);
  local_8 = FUN_00405800(param_1,puVar2,&local_10);
  if (local_8 == 0) {
    uVar1 = puVar2[8];
    if (uVar1 != 0) {
      if (*(int *)(uVar1 + 0x1c) != 8) {
        *(undefined2 *)(uVar1 + 0x20) = *(undefined2 *)(uVar1 + 4);
      }
      uVar1 = puVar2[8];
      if (puVar2[1] != *(int *)(uVar1 + 0x40) + *(int *)(uVar1 + 0x34)) {
        *(undefined2 *)(uVar1 + 0x44084) = 1;
      }
      if ((*(int *)puVar2[9] != 0) &&
         ((uVar1 = puVar2[8], *(int *)(uVar1 + 0x34) != 0 || (*(int *)(uVar1 + 0x40) != 0)))) {
        if ((int)(short)puVar2[4] - (int)(short)puVar2[3] != (uint)*(ushort *)(uVar1 + 4)) {
          *(short *)(uVar1 + 4) = (short)puVar2[4] - (short)puVar2[3];
          *(undefined2 *)(puVar2[8] + 0x44084) = 1;
        }
        if (*(short *)(puVar2[8] + 8) != (short)puVar2[3]) {
          *(short *)(puVar2[8] + 8) = (short)puVar2[3];
          *(undefined2 *)(puVar2[8] + 0x44084) = 1;
        }
        if (*(short *)(puVar2[8] + 0xc) != *(short *)((int)puVar2 + 0x12)) {
          *(short *)(puVar2[8] + 0xc) = *(short *)((int)puVar2 + 0x12);
          *(undefined2 *)(puVar2[8] + 0x44084) = 1;
        }
        if (*(short *)(puVar2[8] + 0xe) != (short)puVar2[5]) {
          *(short *)(puVar2[8] + 0xe) = (short)puVar2[5];
          *(short *)(puVar2[8] + 10) = -(short)puVar2[5];
          *(undefined2 *)(puVar2[8] + 0x44084) = 1;
        }
        if ((int)(short)puVar2[5] + (int)*(short *)((int)puVar2 + 0x12) !=
            (uint)*(ushort *)(puVar2[8] + 6)) {
          *(short *)(puVar2[8] + 6) = (short)puVar2[5] + *(short *)((int)puVar2 + 0x12);
        }
      }
    }
    if ((*puVar2 & 1) != 0) {
      local_8 = ((*puVar2 & 0x20) != 0) + 0xb9;
      goto LAB_00407322;
    }
    uVar1 = puVar2[8];
    if (uVar1 == 0) {
      local_8 = 3;
    }
    else if (*(int *)(uVar1 + 0x58) != 0) {
      uVar3 = FUN_00411976(1,*(undefined4 *)(uVar1 + 0x54),&local_8);
      *(undefined4 *)(local_c[8] + 0x54) = uVar3;
      puVar2 = local_c;
      if (local_8 != 0) goto LAB_004072e7;
      *(undefined1 *)(*(int *)(local_c[8] + 0x58) + *(int *)(local_c[8] + 0x54)) = 0;
    }
    *param_4 = puVar2[8];
  }
  else {
LAB_004072e7:
    FUN_00407343();
    FUN_00411a5c(puVar2[8]);
    puVar2[8] = 0;
  }
LAB_00407322:
  if (puVar2 != (uint *)0x0) {
    FUN_0040553b();
    FUN_00411a5c(puVar2);
  }
  return local_8;
}

