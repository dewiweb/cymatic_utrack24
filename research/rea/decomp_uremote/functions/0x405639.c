// rea decompile_all
// name: FUN_00405639
// address: 0x405639
// body: available
// range: 0x405639-0x4057ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405639(byte *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  int *in_ECX;
  byte *in_EDX;
  int iVar6;
  byte *pbVar7;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  in_ECX[2] = 0;
  if (in_ECX[1] != 0) {
    *(undefined **)*in_ECX = &DAT_005ffa1e;
    *(undefined **)(*in_ECX + 4) = &DAT_005ffa1e;
    *(undefined **)(*in_ECX + 8) = &DAT_005ffa1e;
    *(undefined **)(*in_ECX + 0xc) = &DAT_005ffa1e;
    *(undefined **)(*in_ECX + 0x10) = &DAT_005ffa1e;
  }
  if ((((param_2 != 0) && (*param_1 != 0)) && (in_EDX != (byte *)0x0)) && (*in_EDX != 0)) {
    _memset(local_28,0,0x20);
    bVar3 = false;
    do {
      bVar1 = *in_EDX;
      if (bVar1 == 0) break;
      if ((bVar1 == 0x2b) && (in_EDX[1] == 0)) {
        bVar3 = true;
      }
      else {
        local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
      }
      in_EDX = in_EDX + 1;
    } while (in_EDX != (byte *)0x0);
    iVar6 = 0;
    pbVar4 = param_1;
LAB_004057a7:
    do {
      if ((param_1 + param_2 <= pbVar4) || (pbVar7 = pbVar4, *pbVar4 == 0)) goto LAB_004057b0;
      while ((*pbVar7 != 0 && (((int)(char)local_28[*pbVar7 >> 3] & 1 << (*pbVar7 & 7)) == 0))) {
        pbVar7 = pbVar7 + 1;
      }
      if ((in_ECX[2] == in_ECX[1]) && (iVar6 = FUN_0040555a(in_ECX[2] + 1), iVar6 != 0)) break;
      if (pbVar7 <= pbVar4) {
        pbVar4 = &DAT_005ffa1e;
      }
      *(byte **)(*in_ECX + in_ECX[2] * 4) = pbVar4;
      in_ECX[2] = in_ECX[2] + 1;
      if (bVar3) {
        pbVar4 = pbVar7;
        if (*pbVar7 != 0) {
          do {
            if (((int)(char)local_28[*pbVar4 >> 3] & 1 << (*pbVar4 & 7)) == 0) break;
            *pbVar4 = 0;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar4 != 0);
LAB_00405794:
          bVar2 = pbVar7 < pbVar4;
          pbVar7 = pbVar4;
          if ((bVar2) && (*pbVar4 == 0)) {
            iVar6 = 1;
            goto LAB_004057a7;
          }
        }
      }
      else if (*pbVar7 != 0) {
        *pbVar7 = 0;
        pbVar4 = pbVar7 + 1;
        goto LAB_00405794;
      }
      iVar6 = 0;
      pbVar4 = pbVar7;
    } while( true );
  }
LAB_004057ee:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_004057b0:
  if (((uint)(in_ECX[2] + iVar6) < (uint)in_ECX[1]) ||
     (iVar5 = FUN_0040555a(in_ECX[2] + iVar6 + 1), iVar5 == 0)) {
    if (iVar6 != 0) {
      *(undefined **)(*in_ECX + in_ECX[2] * 4) = &DAT_005ffa1e;
      in_ECX[2] = in_ECX[2] + 1;
    }
    *(undefined4 *)(*in_ECX + in_ECX[2] * 4) = 0;
  }
  goto LAB_004057ee;
}

