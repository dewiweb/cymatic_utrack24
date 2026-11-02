// rea decompile_all
// name: FUN_00424be3
// address: 0x424be3
// body: available
// range: 0x424be3-0x424d15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00424be3(byte *param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *in_EAX;
  byte *pbVar5;
  int in_ECX;
  int iVar6;
  byte bVar7;
  byte bVar8;
  uint in_EDX;
  int iVar9;
  int local_18;
  byte *local_14;
  int local_10;
  uint local_c;
  
  iVar1 = in_EAX[2];
  iVar6 = in_EAX[3];
  if (iVar1 < 0) {
    iVar6 = iVar6 - (*in_EAX + -1) * iVar1;
  }
  local_10 = 0;
  local_c = 0;
  local_14 = (byte *)(((int)in_EDX >> 3) + iVar6 + iVar1 * param_4);
  if (0 < in_ECX) {
    bVar7 = (byte)in_EDX & 7;
    bVar4 = 8 - bVar7;
    local_18 = in_ECX;
    do {
      pbVar5 = local_14;
      iVar6 = param_2;
      if (7 < param_2) {
        iVar3 = param_2 + -8;
        iVar2 = -local_c;
        do {
          iVar6 = iVar3;
          iVar9 = iVar2 + 8;
          if (local_c < 8) {
            local_c = local_c + 8;
            local_10 = CONCAT22(local_10._2_2_,
                                (ushort)local_10 | (ushort)*param_1 << ((byte)(iVar2 + 8) & 0x1f));
            param_1 = param_1 + 1;
            iVar9 = iVar2;
          }
          bVar8 = (byte)((uint)local_10 >> 8);
          if ((in_EDX & 7) == 0) {
            *pbVar5 = *pbVar5 | bVar8;
          }
          else {
            *pbVar5 = *pbVar5 | bVar8 >> bVar7;
            pbVar5[1] = pbVar5[1] | bVar8 << (bVar4 & 0x1f);
          }
          local_10 = local_10 << 8;
          local_c = local_c - 8;
          pbVar5 = pbVar5 + 1;
          iVar3 = iVar6 + -8;
          iVar2 = iVar9;
        } while (-1 < iVar6 + -8);
      }
      if (0 < iVar6) {
        if ((int)local_c < iVar6) {
          local_10 = CONCAT22(local_10._2_2_,
                              (ushort)local_10 | (ushort)*param_1 << (8U - (char)local_c & 0x1f));
          param_1 = param_1 + 1;
          local_c = local_c + 8;
        }
        bVar8 = ~(byte)(0xff >> ((byte)iVar6 & 0x1f)) & (byte)((uint)local_10 >> 8);
        *pbVar5 = *pbVar5 | bVar8 >> bVar7;
        if ((int)(uint)bVar4 < iVar6) {
          pbVar5[1] = pbVar5[1] | bVar8 << (bVar4 & 0x1f);
        }
        local_10 = local_10 << ((byte)iVar6 & 0x1f);
        local_c = local_c - iVar6;
      }
      if (param_3 != '\0') {
        local_10 = 0;
        local_c = 0;
      }
      local_14 = local_14 + iVar1;
      local_18 = local_18 + -1;
    } while (0 < local_18);
  }
  return;
}

