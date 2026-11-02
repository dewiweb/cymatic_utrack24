// rea decompile_all
// name: FUN_00432e6b
// address: 0x432e6b
// body: available
// range: 0x432e6b-0x432fba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00432e6b(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  char *in_ECX;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  char *local_110;
  char local_109;
  byte local_108 [112];
  undefined1 local_98 [144];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_98;
  iVar2 = *(int *)(param_2 + 0x68);
  iVar4 = FUN_0041106d();
  if (iVar4 == 0) {
    pbVar8 = local_108;
    local_109 = '\x01';
    bVar3 = false;
    pbVar9 = pbVar8;
    local_110 = in_ECX;
    while (local_110 < in_ECX + param_1) {
      if (pbVar9 <= pbVar8) {
        iVar4 = FUN_004d021d();
        uVar5 = *(int *)(iVar2 + 4) - iVar4;
        if (uVar5 == 0) break;
        if (0xff < uVar5) {
          uVar5 = 0x100;
        }
        iVar6 = FUN_004110b4(local_108,uVar5);
        if (iVar6 != 0) break;
        uVar10 = FUN_004d021d();
        pbVar8 = (byte *)((ulonglong)uVar10 >> 0x20);
        pbVar9 = pbVar8 + ((int)uVar10 - iVar4);
      }
      bVar1 = *pbVar8;
      if (bVar1 - 0x30 < 10) {
        cVar7 = bVar1 - 0x30;
LAB_00432f69:
        if (local_109 == '\0') {
          *local_110 = *local_110 + cVar7;
          local_110 = local_110 + 1;
        }
        else {
          *local_110 = cVar7 << 4;
        }
        local_109 = '\x01' - local_109;
        if (bVar3) break;
      }
      else {
        if ((0x60 < bVar1) && (bVar1 < 0x67)) {
          cVar7 = bVar1 + 0x9f;
          goto LAB_00432f69;
        }
        if ((0x40 < bVar1) && (bVar1 < 0x47)) {
          cVar7 = bVar1 - 0x37;
          goto LAB_00432f69;
        }
        if ((((bVar1 != 0x20) && (bVar1 != 9)) && (bVar1 != 0xd)) &&
           (((bVar1 != 10 && (bVar1 != 0xc)) && (bVar1 != 0)))) {
          if (bVar1 == 0x3e) {
            cVar7 = '\0';
            bVar3 = true;
            goto LAB_00432f69;
          }
          break;
        }
      }
      pbVar8 = pbVar8 + 1;
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_98);
  return;
}

