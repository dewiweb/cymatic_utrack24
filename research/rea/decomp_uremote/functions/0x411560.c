// rea decompile_all
// name: FUN_00411560
// address: 0x411560
// body: available
// range: 0x411560-0x4116f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00411560(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined3 uVar4;
  ushort uVar5;
  bool bVar6;
  byte *in_EAX;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *_Src;
  sbyte sVar10;
  int local_c;
  
  bVar6 = false;
  if ((in_EAX == (byte *)0x0) || (param_1 == 0)) {
    return 6;
  }
  local_c = 0;
  _Src = *(byte **)(param_1 + 0x20);
  do {
    bVar3 = *in_EAX;
    switch(bVar3) {
    case 4:
      local_c = FUN_004111b5();
      if (local_c != 0) goto LAB_004116d4;
      pbVar9 = *(byte **)(param_1 + 0x20);
      bVar6 = true;
      break;
    default:
      *(byte **)(param_1 + 0x20) = _Src;
LAB_004116d4:
      if (!bVar6) {
        return local_c;
      }
      FUN_00411249();
      return local_c;
    case 8:
    case 9:
      uVar7 = (uint)*_Src;
      pbVar9 = _Src + 1;
      sVar10 = 0x18;
      goto LAB_00411692;
    case 0xc:
    case 0xd:
      bVar1 = *_Src;
      bVar2 = _Src[1];
      goto LAB_00411606;
    case 0xe:
    case 0xf:
      bVar1 = _Src[1];
      bVar2 = *_Src;
LAB_00411606:
      pbVar9 = _Src + 2;
      uVar7 = (uint)bVar1;
      sVar10 = 0x10;
LAB_0041168f:
      uVar7 = uVar7 << 8 | (uint)bVar2;
LAB_00411692:
      if ((bVar3 & 1) != 0) {
        uVar7 = (int)(uVar7 << sVar10) >> sVar10;
      }
      puVar8 = (uint *)((uint)*(ushort *)(in_EAX + 2) + param_2);
      if (in_EAX[1] == 1) {
        *(char *)puVar8 = (char)uVar7;
      }
      else if (in_EAX[1] == 2) {
        *(short *)puVar8 = (short)uVar7;
      }
      else {
        *puVar8 = uVar7;
      }
      break;
    case 0x10:
    case 0x11:
      uVar4 = CONCAT21(CONCAT11(*_Src,_Src[1]),_Src[2]);
      bVar2 = _Src[3];
      goto LAB_00411639;
    case 0x12:
    case 0x13:
      uVar4 = *(undefined3 *)(_Src + 1);
      bVar2 = *_Src;
LAB_00411639:
      pbVar9 = _Src + 4;
      uVar7 = CONCAT31(uVar4,bVar2);
      sVar10 = 0;
      goto LAB_00411692;
    case 0x14:
    case 0x15:
      uVar5 = CONCAT11(*_Src,_Src[1]);
      bVar2 = _Src[2];
      goto LAB_0041168a;
    case 0x16:
    case 0x17:
      uVar5 = *(ushort *)(_Src + 1);
      bVar2 = *_Src;
LAB_0041168a:
      pbVar9 = _Src + 3;
      uVar7 = (uint)uVar5;
      sVar10 = 8;
      goto LAB_0041168f;
    case 0x18:
    case 0x19:
      pbVar9 = _Src + in_EAX[1];
      if (*(byte **)(param_1 + 0x24) < pbVar9) {
        local_c = 0x55;
        goto LAB_004116d4;
      }
      if (bVar3 == 0x18) {
        _memcpy((void *)((uint)*(ushort *)(in_EAX + 2) + param_2),_Src,(uint)in_EAX[1]);
      }
    }
    in_EAX = in_EAX + 4;
    _Src = pbVar9;
  } while( true );
}

