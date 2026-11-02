// rea decompile_all
// name: FUN_0049a84d
// address: 0x49a84d
// body: available
// range: 0x49a84d-0x49aa64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049a84d(byte *param_1)

{
  ushort uVar1;
  int *in_EAX;
  byte *in_ECX;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int local_3c [4];
  uint local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (*(byte *)(in_EAX + 2) != 3) {
    if ((*(byte *)(in_EAX + 2) & 2) == 0) {
      local_3c[0] = (uint)*(byte *)((int)in_EAX + 9) - (uint)in_ECX[3];
      local_2c[0] = (uint)in_ECX[3];
      local_8 = 1;
    }
    else {
      uVar2 = (uint)*(byte *)((int)in_EAX + 9);
      local_3c[0] = uVar2 - *in_ECX;
      local_2c[0] = (uint)*in_ECX;
      local_2c[1] = (uint)in_ECX[1];
      local_3c[1] = uVar2 - in_ECX[1];
      local_3c[2] = uVar2 - in_ECX[2];
      local_2c[2] = (uint)in_ECX[2];
      local_8 = 3;
    }
    uVar2 = local_8;
    if ((*(byte *)(in_EAX + 2) & 4) != 0) {
      bVar5 = in_ECX[4];
      local_8 = local_8 + 1;
      local_3c[uVar2] = (uint)*(byte *)((int)in_EAX + 9) - (uint)bVar5;
      local_2c[uVar2] = (uint)bVar5;
    }
    bVar5 = *(byte *)((int)in_EAX + 9);
    if (bVar5 < 8) {
      local_14 = in_EAX[1];
      if ((in_ECX[3] == 1) && (bVar5 == 2)) {
        local_10 = 0x55;
      }
      else if ((bVar5 != 4) || (local_10 = 0x11, in_ECX[3] != 3)) {
        local_10 = 0xff;
      }
      if (local_14 != 0) {
        do {
          uVar2 = 0;
          bVar5 = 0;
          for (iVar3 = local_3c[0]; (int)-local_2c[0] < iVar3; iVar3 = iVar3 - local_2c[0]) {
            if (iVar3 < 1) {
              uVar6 = *param_1 >> (-(byte)iVar3 & 0x1f) & local_10;
            }
            else {
              uVar6 = (uint)*param_1 << ((byte)iVar3 & 0x1f);
            }
            uVar2 = uVar2 | uVar6;
            bVar5 = (byte)uVar2;
          }
          *param_1 = bVar5;
          param_1 = param_1 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
    else if (bVar5 == 8) {
      iVar3 = *in_EAX;
      local_10 = 0;
      if (iVar3 * local_8 != 0) {
        do {
          local_c = 0;
          iVar4 = local_3c[local_10 % local_8];
          uVar2 = local_2c[local_10 % local_8];
          if ((int)-uVar2 < iVar4) {
            local_14 = -uVar2;
            do {
              if (iVar4 < 1) {
                uVar6 = (uint)(*param_1 >> (-(byte)iVar4 & 0x1f));
              }
              else {
                uVar6 = (uint)*param_1 << ((byte)iVar4 & 0x1f);
              }
              local_c = local_c | uVar6;
              iVar4 = iVar4 - uVar2;
            } while ((int)-uVar2 < iVar4);
          }
          local_10 = local_10 + 1;
          *param_1 = (byte)local_c;
          param_1 = param_1 + 1;
        } while (local_10 < iVar3 * local_8);
      }
    }
    else {
      iVar3 = *in_EAX;
      local_10 = 0;
      if (iVar3 * local_8 != 0) {
        do {
          local_c = 0;
          uVar1 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
          local_14 = (uint)uVar1;
          iVar4 = local_3c[local_10 % local_8];
          local_18 = local_2c[local_10 % local_8];
          if ((int)-local_18 < iVar4) {
            local_1c = -local_2c[local_10 % local_8];
            do {
              if (iVar4 < 1) {
                uVar2 = (uint)(uVar1 >> (-(byte)iVar4 & 0x1f));
              }
              else {
                uVar2 = (uint)uVar1 << ((byte)iVar4 & 0x1f);
              }
              iVar4 = iVar4 - local_18;
              local_c = local_c | uVar2;
            } while (local_1c < iVar4);
          }
          *param_1 = (byte)(local_c >> 8);
          param_1[1] = (byte)local_c;
          param_1 = param_1 + 2;
          local_10 = local_10 + 1;
        } while (local_10 < iVar3 * local_8);
      }
    }
  }
  return;
}

